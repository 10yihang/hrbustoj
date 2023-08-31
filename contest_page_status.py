'''
author: yihang_01
Date: 2023-08-31 18:56:13
LastEditTime: 2023-08-31 20:04:29
Description: 爱自己最重要啦
QwQ 加油加油
'''
from global_var import session
# from contest_page_test import session
from global_var import headers
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
# from urllib.parse import urlparse, parse_qs, urlencode, urlunparse

url = "http://acm.hrbust.edu.cn"


def open_problems_page():
    # 在此处实现打开 Problems 页面的逻辑
    pass

def open_status_page(cid):
    # 在此处实现打开 Status 页面的逻辑
    pass

def open_statistics_page(cid):
    # 在此处实现打开 Statistics 页面的逻辑
    pass

def open_ranklist_page(url):
    # 在此处实现打开 Ranklist 页面的逻辑
    pass

def get_status_info(url):
    window = tk.Tk()
    window.title("Status")
    window.geometry("800x600+600+200")

    button_frame = Frame(window)
    # 创建四个按钮并添加到按钮框架
    problems_button = Button(button_frame, text="Problems", command=lambda: open_problems_page())
    status_button = Button(button_frame, text="Status", command=lambda: open_status_page(cid))
    statistics_button = Button(button_frame, text="Statistics", command=lambda: open_statistics_page(cid))
    ranklist_button = Button(button_frame, text="Ranklist", command=lambda: open_ranklist_page(url))
    
    # 设置按钮样式
    button_style = ("Helvetica", 16)
    problems_button.config(font=button_style)
    status_button.config(font=button_style)
    statistics_button.config(font=button_style)
    ranklist_button.config(font=button_style)
    
    # 布局按钮
    problems_button.grid(row=0, column=0, padx=10, pady=10)
    status_button.grid(row=0, column=1, padx=10, pady=10)
    statistics_button.grid(row=0, column=2, padx=10, pady=10)
    ranklist_button.grid(row=0, column=3, padx=10, pady=10)
    
    button_frame.grid(row=0, column=0, columnspan=4, sticky="ew") 

    
    page = session.get(url, headers=headers)
    # print(page.text)
    soup = BeautifulSoup(page.text, 'html.parser')
    total_status = soup.find_all("tr", class_=["ojlist-row0","ojlist-row1"])
    # print(total_status)
    run_id = [];problem_id = [];judgestatus = [];language = [];time = [];memory = [];code_length = [];submit_time = []

    for i in range(len(total_status)):
        tds = total_status[i].find_all("td")
        run_id = tds[0].text
        problem_id = tds[1].text
        judgestatus = tds[2].text.replace("\n","").replace("\t","")
        language = tds[3].text
        time = tds[4].text
        memory = tds[5].text
        code_length = tds[6].text
        submit_time = tds[7].text

        status_label = Label(window, text=run_id + " " + problem_id + " " + judgestatus + " " + language + " " + time + " " + memory + " " + code_length + " " + submit_time, font=("Arial", 15), height=4)
        status_label.grid(row=i + 1, column=0, sticky="ew")  # 从第1行开始，每个Label占据一行，从第0列开始，紧贴左侧

    window.mainloop()