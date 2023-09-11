'''
author: yihang_01
Date: 2023-08-31 18:56:13
LastEditTime: 2023-09-02 19:14:13
Description: 爱自己最重要啦
QwQ 加油加油
'''
from global_var import session
# from contest_page_test import session
from global_var import headers
# from contest_page_status import get_status_info
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

def set_text_color(item_id, column, color):
    tree.item(item_id, tags=(color,))
    tree.tag_configure(color, foreground=color)

def refresh_window(url,window):
    window.destroy()
    get_status_info(url)

def on_mouse_wheel(event):
    global canvas
    canvas.yview_scroll(-1 * (event.delta // 120), "units")

def open_problems_page():
    # 在此处实现打开 Problems 页面的逻辑
    pass

def open_status_page(cid):
    # 在此处实现打开 Status 页面的逻辑
    pass

def open_statistics_page(cid):
    # 在此处实现打开 Statistics 页面的逻辑
    from contest_page_statistics import get_statistics_info
    get_statistics_info(url + "/contests/index.php?act=statistics&cid=" + str(cid))

def open_ranklist_page(url):
    # 在此处实现打开 Ranklist 页面的逻辑
    pass

def get_status_info(url):
    window = tk.Tk()
    window.title("Status")
    screen_width = window.winfo_screenwidth()
    screen_height = window.winfo_screenheight()
    x = (screen_width - 1280) // 2
    y = (screen_height - 800) // 2
    # 设置窗口大小为全屏
    window.geometry(f"1280x800+{x}+{y}")
    window.lift()  # 将窗口提到前台
    # window.attributes("-topmost", True)  # 确保窗口位于顶层
    window.focus_force()  # 强制窗口获得焦点

    cid=url.split("cid=")[1]

    global canvas
    canvas = Canvas(window)
    scrollbar = Scrollbar(window, orient="vertical", command=canvas.yview)
    canvas.config(yscrollcommand=scrollbar.set)
    
    # 将Canvas放置在窗口中
    canvas.grid(row=0, column=0, sticky="nsew")
    scrollbar.grid(row=0, column=1, sticky="ns")

    window.columnconfigure(0, weight=1)
    window.rowconfigure(0, weight=1)
    # 创建一个Frame来放置内容
    content_frame = Frame(canvas)
    
    # 将Frame放置在Canvas上
    canvas.create_window((0, 0), window=content_frame, anchor="nw")


    
    button_frame = Frame(content_frame)
    # 创建四个按钮并添加到按钮框架
    problems_button = Button(button_frame, text="Problems", command=lambda: open_problems_page())
    status_button = Button(button_frame, text="Status", command=lambda: open_status_page(cid))
    statistics_button = Button(button_frame, text="Statistics", command=lambda: open_statistics_page(cid))
    ranklist_button = Button(button_frame, text="Ranklist", command=lambda: open_ranklist_page(url))
    refresh_button = Button(button_frame, text="Refresh", command=lambda: refresh_window(url,window))
    window.bind("<F5>", lambda event: refresh_window(url,window))


    # 设置按钮样式
    button_style = ("Helvetica", 16)
    problems_button.config(font=button_style)
    status_button.config(font=button_style)
    statistics_button.config(font=button_style)
    ranklist_button.config(font=button_style)
    refresh_button.config(font=button_style)

    # 布局按钮
    problems_button.grid(row=0, column=0, padx=10, pady=10)
    status_button.grid(row=0, column=1, padx=10, pady=10)
    statistics_button.grid(row=0, column=2, padx=10, pady=10)
    ranklist_button.grid(row=0, column=3, padx=10, pady=10)
    refresh_button.grid(row=0, column=4, padx=10, pady=10)

    button_frame.grid(row=0, column=0, columnspan=5, sticky="ew") 
    
    header_frame=Frame(content_frame)
    
    page = session.get(url, headers=headers)
    # print(page.text)
    soup = BeautifulSoup(page.text, 'html.parser')
    total_status = soup.find_all("tr", class_=["ojlist-row0","ojlist-row1"])
    # print(total_status)
    # run_id = [];problem_id = [];judgestatus = [];language = [];time = [];memory = [];code_length = [];submit_time = []

    # status_button.focus_set()
    data=[]
    for i, header in enumerate(["RunID", "ID", "JudgeStatus", "Language", "Time", "Memory", "Length", "SubmitTime"]):
        label = Label(header_frame, text=header, font=("Arial", 12, "bold"))
        label.grid(row=1, column=i, padx=5, pady=5, sticky="nsew")
    header_frame.grid(row=1, column=0, columnspan=5, sticky="ew")

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
        language = language.replace("\n","").strip()
        submit_time = submit_time.replace("\n","").strip()
        data.append([run_id, problem_id, judgestatus, language, time, memory, code_length, submit_time])
    #     # print(submit_time)
    #     status_label = Label(content_frame, text=run_id + " " + problem_id + " " + judgestatus + " " + language + " " + time + " " + memory + " " + code_length + " " + submit_time, font=("Arial", 15), height=4)
    #     # status_label = Label(window, text=run_id + " " + problem_id + " " + judgestatus , font=("Arial", 15), height=4)
    #     status_label.grid(row=i+2, column=0, sticky="w")  # 添加 sticky="w" 参数，让Label紧贴左边

    for i, row in enumerate(data):
        for j, value in enumerate(row):
            if row[2]=="Accepted":
                color = "green"
            else: color = "red"
            label = tk.Label(header_frame, text=value, font=("Arial", 12), fg=color)
            label.grid(row=i+2, column=j, padx=5, pady=5, sticky="w")

    # content_frame.update_idletasks()  # 更新content_frame以获取实际高度
    # # content_height = content_frame.winfo_height()
    # # canvas.config(scrollregion=(0, 0, 0, content_height))  # 设置Canvas组件的高度
    # canvas.config(scrollregion=canvas.bbox("all"))  # 配置滚动区域
    # canvas.config(scrollregion=(0,0,0,content_height))  # 设置Canvas组件的高度


    content_frame.update_idletasks()  # 更新content_frame以获取实际高度
    content_height = content_frame.winfo_height()
    canvas.config(scrollregion=(0, 0, 0, content_height))  # 设置Canvas组件的高度
    canvas.bind_all("<MouseWheel>", on_mouse_wheel)

    window.mainloop()
    