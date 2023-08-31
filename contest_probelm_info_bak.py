'''
author: yihang_01
Date: 2023-08-29 18:29:43
LastEditTime: 2023-08-31 17:04:07
Description: 爱自己最重要啦
QwQ 加油加油
'''
from lxml import etree
import requests
from fake_useragent import UserAgent
import pandas as pd
import time
import csv
from bs4 import BeautifulSoup
import tkinter as tk
from tkinter import scrolledtext
from tkinter import *
from tkinter import ttk
# from hrbustoj2 import session
from global_var import session
import html

f = open('problem.txt', 'w', encoding='utf-8')

headers = {
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7',
    'Accept-Language': 'zh-CN,zh;q=0.9,en;q=0.8,en-GB;q=0.7,en-US;q=0.6',
    'Cache-Control': 'max-age=0',
    'Content-Type': 'application/x-www-form-urlencoded',
    # 'Cookie': 'last_problem_vol=16; PHPSESSID=ff176qecr535rfpi2uo19ss397',
    'Origin': 'http://acm.hrbust.edu.cn',
    'Proxy-Connection': 'keep-alive',
    # 'Referer': 'http://acm.hrbust.edu.cn/contests/index.php?act=login&cid=2085',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.62',
}

def copy_text(text):
    global window
    window.clipboard_clear()
    window.clipboard_append(text)
    window.update()

def get_problem_info(url):
    
    page = session.get(url, headers=headers)
    soup = BeautifulSoup(page.text, 'html.parser')
    # print(page.text)
    # print(url)
    # title = "body > table.body_table > tr > td.right_table > table.problem_mod > tr > td.problem_mod_name "
    # text = 
    # time_limit = 
    # total_submit = 
    title = soup.find_all("td", class_="problem_mod_name")
    time_limit = soup.find_all("table", class_="problem_mod_info")
    title = title[0].text
    total = time_limit[1].find_all("td")
    total_submit = total[0].text
    total_ac = total[1].text
    special_judge = total[2].text
    time_limit = time_limit[0].find_all("td")
    time_limit = time_limit[0].text + "    " + time_limit[1].text
    total_submit = total_submit.strip().replace("									","")
    total_ac = total_ac.strip().replace("									","")
    special_judge = special_judge.strip()
    time_limit = time_limit.strip()
    print(title,file=f)
    print(time_limit,file=f)
    print(total_submit,file=f)
    print(total_ac,file=f)
    print(special_judge,file=f)
    print(time_limit)
    global window 
    window = tk.Tk()
    window.title(title)
    window.geometry("800x600+600+200")

    scrollbar = tk.Scrollbar(window)
    scrollbar.pack(side=tk.RIGHT, fill=tk.Y)


    wd_title = Label(window, text=title, font=("Arial", 20), width=50, height=2)
    wd_title.pack()
    wd_time_limit = Label(window, text=time_limit, font=("Arial", 15), width=50, height=2)
    wd_time_limit.pack()
    wd_total_submit = Label(window, text=total_submit + "    " + total_ac, font=("Arial", 15), width=50, height=2)
    wd_total_submit.pack()
    wd_special_judge = Label(window, text=special_judge, font=("Arial", 15), width=50, height=2)
    wd_special_judge.pack()
    
    Description = soup.find_all("td", class_="problem_mod_title")
    content = soup.find_all("td", class_="problem_mod_content")
    # print(Description[5].text)
    # print(content[5].text)
    for i in range(len(Description)):
        wd_Description = Label(window, text=Description[i].text, font=("Arial", 15), anchor='w')
        wd_Description.pack(fill='x')
        estimated_lines = content[i].text.count('\n') + 1
        text_widget = Text(window, wrap=tk.WORD, state='disabled', bg='white', font=(12), height=estimated_lines)
        text_widget.pack(fill='x', expand=True)
        content_text = content[i].text.strip()
        
        text_widget.configure(state='normal')
        text_widget.insert("insert", content_text)
        text_widget.configure(state='disabled')

        copy_button = tk.Button(window, text="Copy", command=lambda text=content_text: copy_text(text))
        copy_button.pack(pady=10)
    
    


    window.mainloop()

    # print(soup.select(title))
    # document.querySelector("body > table.body_table > tbody > tr > td.right_table > table.problem_mod > tbody > tr:nth-child(1) > td")

# get_problem_info("http://acm.hrbust.edu.cn/contests/index.php?act=showproblem&cid=2085&p=A") 