'''
author: yihang_01
Date: 2023-09-03 11:26:07
LastEditTime: 2023-09-03 23:11:08
Description: 爱自己最重要啦
QwQ 加油加油
'''
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

def refresh_window(url,params):
    global window
    window.destroy()
    get_status_info(url,params)

def on_mouse_wheel(event):
    global canvas
    canvas.yview_scroll(-1 * (event.delta // 120), "units")

def goTo_next(url,params):
    global window
    status_vol = url.split("status_vol=")[1].split("&")[0]
    get_status_info(url + "/index.php?m=Status&a=showStatus&status_vol=" + str(int(status_vol)+1),params)

def perform_query():
    # 获取输入框和单选按钮的值
    global probid_entry, username_entry, judgestatus_var, lang_var, window
    probid_value = probid_entry.get()
    username_value = username_entry.get()
    judgestatus_value = judgestatus_var.get()
    lang_value = lang_var.get()
    window.destroy()
    params={
        "problem_id": probid_value,
        "user_name": username_value,
        "language": lang_value,
        "judge_status": judgestatus_value,
    }
    get_status_info(url + "/index.php?m=Status&a=showStatus&status_vol=1",params)
    # 执行查询操作，你可以在这里编写你的查询逻辑
    # 示例：打印获取的值
    # print("ProbID:", probid_value)
    # print("Username:", username_value)
    # print("Judgestatus:", judgestatus_value)
    # print("Lang:", lang_value)

def get_status_info(url,params):
    global window
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

    window.bind("<F5>", lambda event: refresh_window(url,params))


    # cid=url.split("cid=")[1]

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


    
    
    header_frame=Frame(content_frame)
    label_frame = Frame(content_frame)
    query_frame = ttk.Frame(header_frame)
    button_frame = Frame(content_frame)
    
    query_frame.grid(row=0, column=0, padx=10, pady=10, sticky="w")
    label_frame.grid(row=1, column=0, columnspan=5, sticky="ew")
    button_frame.grid(row=2, column=1, columnspan=5, sticky="ew")
    # ProbID 输入框
    global probid_entry
    probid_label = ttk.Label(query_frame, text="ProbID:")
    probid_label.grid(row=0, column=0, padx=5, pady=5, sticky="w")
    probid_entry = ttk.Entry(query_frame)
    probid_entry.grid(row=0, column=1, padx=5, pady=5, sticky="w")

    
    # Username 输入框
    global username_entry
    username_label = ttk.Label(query_frame, text="Username:")
    username_label.grid(row=1, column=0, padx=5, pady=5, sticky="w")
    username_entry = ttk.Entry(query_frame)
    username_entry.grid(row=1, column=1, padx=5, pady=5, sticky="w")

    # Judgestatus 单选按钮
    judgestatus_label = ttk.Label(query_frame, text="Judgestatus:")
    judgestatus_label.grid(row=2, column=0, padx=5, pady=5, sticky="w")
    global judgestatus_var
    judgestatus_var = tk.StringVar(master=window)
    judgestatus_accepted = ttk.Radiobutton(query_frame, text="Accepted", variable=judgestatus_var, value="2")
    judgestatus_presentation_error = ttk.Radiobutton(query_frame, text="Presentation Error", variable=judgestatus_var, value="3")
    judgestatus_time_limit_exceeded = ttk.Radiobutton(query_frame, text="Time Limit Exceeded", variable=judgestatus_var, value="7")
    judgestatus_memory_limit_exceeded = ttk.Radiobutton(query_frame, text="Memory Limit Exceeded", variable=judgestatus_var, value="6")
    judgestatus_wrong_answer = ttk.Radiobutton(query_frame, text="Wrong Answer", variable=judgestatus_var, value="4")
    judgestatus_runtime_error = ttk.Radiobutton(query_frame, text="Runtime Error", variable=judgestatus_var, value="10")
    judgestatus_output_limit_exceeded = ttk.Radiobutton(query_frame, text="Output Limit Exceeded", variable=judgestatus_var, value="5")
    judgestatus_restricted_function = ttk.Radiobutton(query_frame, text="Restricted Function", variable=judgestatus_var, value="9")
    judgestatus_compile_error = ttk.Radiobutton(query_frame, text="Compile Error", variable=judgestatus_var, value="8")
    judgestatus_system_error = ttk.Radiobutton(query_frame, text="System Error", variable=judgestatus_var, value="1")
    judgestatus_accepted.grid(row=2, column=1, padx=5, pady=5, sticky="w")
    judgestatus_presentation_error.grid(row=2, column=2, padx=5, pady=5, sticky="w")
    judgestatus_time_limit_exceeded.grid(row=2, column=3, padx=5, pady=5, sticky="w")
    judgestatus_memory_limit_exceeded.grid(row=2, column=4, padx=5, pady=5, sticky="w")
    judgestatus_wrong_answer.grid(row=2, column=5, padx=5, pady=5, sticky="w")
    judgestatus_runtime_error.grid(row=2, column=6, padx=5, pady=5, sticky="w")
    judgestatus_output_limit_exceeded.grid(row=2, column=7, padx=5, pady=5, sticky="w")
    judgestatus_restricted_function.grid(row=2, column=8, padx=5, pady=5, sticky="w")
    judgestatus_compile_error.grid(row=2, column=9, padx=5, pady=5, sticky="w")
    judgestatus_system_error.grid(row=2, column=10, padx=5, pady=5, sticky="w")


    # Lang 单选按钮
    lang_label = ttk.Label(query_frame, text="Lang:")
    lang_label.grid(row=3, column=0, padx=5, pady=5, sticky="w")
    global lang_var
    lang_var = tk.StringVar(master=window)
    lang_cpp = ttk.Radiobutton(query_frame, text="C++", variable=lang_var, value="2")
    lang_python = ttk.Radiobutton(query_frame, text="Python", variable=lang_var, value="6")
    lang_c = ttk.Radiobutton(query_frame, text="C", variable=lang_var, value="1")
    lang_java = ttk.Radiobutton(query_frame, text="Java", variable=lang_var, value="3")
    lang_php = ttk.Radiobutton(query_frame, text="PHP", variable=lang_var, value="4")
    lang_haskell = ttk.Radiobutton(query_frame, text="Haskell", variable=lang_var, value="7")
    lang_cpp.grid(row=3, column=1, padx=5, pady=5, sticky="w")
    lang_python.grid(row=3, column=2, padx=5, pady=5, sticky="w")
    lang_c.grid(row=3, column=3, padx=5, pady=5, sticky="w")
    lang_java.grid(row=3, column=4, padx=5, pady=5, sticky="w")
    lang_php.grid(row=3, column=5, padx=5, pady=5, sticky="w")
    lang_haskell.grid(row=3, column=6, padx=5, pady=5, sticky="w")

    # 查询按钮
    query_button = ttk.Button(query_frame, text="Query", command=perform_query)
    query_button.grid(row=4, column=0, columnspan=3, padx=5, pady=5, sticky="w")
    # header_frame.columnconfigure(0, weight=1)
    # header_frame.columnconfigure(1, weight=1)

    if params=="":
        params = {
            "problem_id": "",
            "user_name": "",
            "language": "",
            "judge_status": "",
            "language":""
        }
    page = session.get(url, headers=headers, params=params)
    # print(page.text)
    soup = BeautifulSoup(page.text, 'html.parser')
    total_status = soup.find_all("tr", class_=["ojlist-row0","ojlist-row1"])
    # print(total_status)
    # run_id = [];problem_id = [];judgestatus = [];language = [];time = [];memory = [];code_length = [];submit_time = []

    # status_button.focus_set()
    data=[]
    for i, header in enumerate(["RunID", "ProbID", "JudgeStatus", "Lang", "Time", "Memory", "Author", "Length", "SubmitTime"]):
        label = Label(label_frame, text=header, font=("Arial", 12, "bold"))
        label.grid(row=0, column=i, padx=3, pady=5, sticky="nsew")
    header_frame.grid(row=5, column=0, columnspan=5, sticky="ew")

    for i in range(len(total_status)):
        tds = total_status[i].find_all("td")
        run_id = tds[1].text
        # probid = tds[2].text
        problem_id = tds[2].text
        judgestatus = tds[3].text.replace("\n","").replace("\t","")
        language = tds[4].text
        time = tds[5].text
        memory = tds[6].text
        author = tds[7].text
        code_length = tds[8].text
        submit_time = tds[9].text
        language = language.replace("\n","").strip()
        submit_time = submit_time.replace("\n","").strip()
        time = time.strip()
        memory = memory.strip()
        code_length = code_length.strip()
        author = author.strip()
        data.append([run_id, problem_id, judgestatus, language, time, memory, author, code_length, submit_time])
    #     # print(submit_time)
    #     status_label = Label(content_frame, text=run_id + " " + problem_id + " " + judgestatus + " " + language + " " + time + " " + memory + " " + code_length + " " + submit_time, font=("Arial", 15), height=4)
    #     # status_label = Label(window, text=run_id + " " + problem_id + " " + judgestatus , font=("Arial", 15), height=4)
    #     status_label.grid(row=i+2, column=0, sticky="w")  # 添加 sticky="w" 参数，让Label紧贴左边

    for i, row in enumerate(data):
        for j, value in enumerate(row):
            if row[2]=="Accepted":
                color = "green"
            else: color = "red"
            label = tk.Label(label_frame, text=value, font=("Arial", 12), fg=color)
            label.grid(row=i+1, column=j, padx=3, pady=5, sticky="w")

    # content_frame.update_idletasks()  # 更新content_frame以获取实际高度
    # # content_height = content_frame.winfo_height()
    # # canvas.config(scrollregion=(0, 0, 0, content_height))  # 设置Canvas组件的高度
    # canvas.config(scrollregion=canvas.bbox("all"))  # 配置滚动区域
    # canvas.config(scrollregion=(0,0,0,content_height))  # 设置Canvas组件的高度
    # button_frame = Frame(content_frame)
    next_page_button = Button(button_frame, text="Next Page", font=("Arial", 15), command=lambda: goTo_next(url,params))
    next_page_button.grid(row=0, column=0, padx=5, pady=5, sticky="w")

    
    # next_page_button.grid(BOTTOM, padx=5, pady=5, sticky="w")
    # button_frame.gird(row=0, column=0, sticky="ew")
    content_frame.update_idletasks()  # 更新content_frame以获取实际高度
    content_height = content_frame.winfo_height()
    canvas.config(scrollregion=(0, 0, 0, content_height))  # 设置Canvas组件的高度
    canvas.bind_all("<MouseWheel>", on_mouse_wheel)

    window.mainloop()
    