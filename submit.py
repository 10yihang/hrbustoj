from lxml import etree
import requests
from fake_useragent import UserAgent
import pandas as pd
import random
import time
import csv
from bs4 import BeautifulSoup
import tkinter as tk
from tkinter import *
from tkinter import ttk
import contest_page as cp
from global_var import session
import json

url = "http://acm.hrbust.edu.cn"

headers = {
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7',
    'Accept-Language': 'zh-CN,zh;q=0.9,en;q=0.8,en-GB;q=0.7,en-US;q=0.6',
    'Cache-Control': 'max-age=0',
    # 'Cookie': 'last_problem_vol=16; PHPSESSID=gfneklckpmd3dim8df0hb4m326',
    'Proxy-Connection': 'keep-alive',
    # 'Referer': 'http://acm.hrbust.edu.cn/index.php?m=Contest&a=contestVolume&ctitle=&ctype=&cstate=&page_id=1',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.54',
}


def click_submit(source_code, problem_id):
    global selected_language,window
    print(selected_language.get())
    # print(selected_language.get())
    # print(source_code)
    # print(problem_id)
    if source_code != '':
        from problemlist_status import get_status_info
        window.destroy() 
        data = {
            'jumpUrl':'',
            'language':selected_language.get(),
            'source_code':source_code,
            'problem_id':problem_id,
        }
        response = session.post("http://acm.hrbust.edu.cn/index.php?m=ProblemSet&a=postCode", data=data, headers=headers)
        # print(response.text)
        get_status_info(url + "/index.php?m=Status&a=showStatus&status_vol=1","")
        

def choose_language():
    global selected_language
    print(selected_language.get())
    # cd_language = selected_language.get()
#2 1 3 6 4 7

def submit_code(url):
    problem_id = url.split('problem_id=')[1].split('#')[0]
    response = session.get(url, headers=headers)
    soup = BeautifulSoup(response.text, 'html.parser')
    soup = soup.find('text', id_="verify_code")
    print(soup)
    global window
    window = tk.Tk()
    window.title("Submit Code")
    # 获取屏幕的宽度和高度
    screen_width = window.winfo_screenwidth()
    screen_height = window.winfo_screenheight()
    x = (screen_width - 1280) // 2
    y = (screen_height - 800) // 2
    # 设置窗口大小为全屏
    window.geometry(f"1280x800+{x}+{y}")
    # selected_language.set("2")
    # 创建选项按钮，设置值和文本

    global selected_language
    selected_language = tk.StringVar(master=window)
    selected_language.set("2")
    languages = [("G++", "2"), ("GCC", "1"), ("JAVA", "3"), ("Python3", "6"), ("PHP", "4"), ("Haskell", "7")]
    for lang, value in languages:
        radio_button = tk.Radiobutton(window, text=lang, variable=selected_language, value=value, command=choose_language)
        radio_button.pack(side=tk.TOP)

    text_widget = tk.Text(window, wrap=tk.WORD, font=("Arial", 12))
    text_widget.pack(fill=tk.BOTH, expand=True)
    
    # 创建 "Submit" 按钮并设置其位置在屏幕下方
    submit_button = ttk.Button(window, text="Submit", command=lambda: click_submit(text_widget.get("1.0", "end-1c"), problem_id))
    submit_button.pack(side=tk.BOTTOM)