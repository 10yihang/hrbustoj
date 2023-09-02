'''
author: yihang_01
Date: 2023-08-29 18:29:43
LastEditTime: 2023-09-03 02:34:49
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
import re
import math

url = "http://acm.hrbust.edu.cn"

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

def calculate_required_lines(content, font_size, width):
    # avg_char_per_line = width / (font_size)  
    # total_chars = len(content)
    # required_lines = math.ceil(total_chars / avg_char_per_line)
    # required_lines = max(required_lines,len(re.findall(r'\r\n|\r|\n', content))+1)
    # return required_lines
    lines = content.split('\n')  # 按换行符拆分文本
    required_lines = 0

    for line in lines:
        line_length = len(line)
        if line_length == 0:
            required_lines += 1  # 空行也算一行
        else:
            # 计算当前行所需的行数，考虑到每行的长度限制
            line_required = math.ceil(line_length / (width / font_size))
            required_lines += line_required

    return required_lines

def submit_problem(act,problem_id):
    # global window
    # window.destroy()
    from submit import submit_code
    submit_code(url + "/index.php?m=ProblemSet&" + act + "=submitCode&problem_id=" + str(problem_id) + '#')

def on_mouse_wheel(event):
    global canvas
    canvas.yview_scroll(-1 * (event.delta // 120), "units")

def copy_text(text):
    global window
    window.clipboard_clear()
    window.clipboard_append(text)
    window.update()

def get_problem_info(url):
    # print(url)
    problem_id = url.split("problem_id=")[1]
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
    global window , canvas
    window = tk.Tk()
    window.title(title)
    screen_width = window.winfo_screenwidth()
    screen_height = window.winfo_screenheight()
    x = (screen_width - 1280) // 2
    y = (screen_height - 800) // 2
    # 设置窗口大小为全屏
    window.geometry(f"1280x800+{x}+{y}")

    canvas = tk.Canvas(window)
    canvas.pack( fill=tk.BOTH, expand=True)

    # 创建垂直滚动条并连接到 Canvas
    scrollbar = tk.Scrollbar(window, command=canvas.yview)
    scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
    canvas.config(yscrollcommand=scrollbar.set)

    # 在 Canvas 内创建一个 Frame 来放置内容
    frame = tk.Frame(canvas)
    canvas.create_window((0, 0), window=frame, anchor='center')
    # frame.pack(fill=tk.BOTH, expand=True)

    wd_title = Label(frame, text=title, font=("黑体", 20, 'bold'), width=50, height=2)
    wd_title.pack()
    wd_time_limit = Label(frame, text=time_limit, font=("Arial", 15), width=50, height=2)
    wd_time_limit.pack()
    wd_total_submit = Label(frame, text=total_submit + "    " + total_ac, font=("Arial", 15), width=50, height=2)
    wd_total_submit.pack()
    wd_special_judge = Label(frame, text=special_judge, font=("Arial", 15), width=50, height=2)
    wd_special_judge.pack()
    
    Description = soup.find_all("td", class_="problem_mod_title")
    content = soup.find_all("td", class_="problem_mod_content")
    # print(Description[5].text)
    # print(content[5].text)
    for i in range(len(Description)):
        wd_Description = tk.Label(frame, text=Description[i].text, font=("Arial", 15, 'bold'), anchor='w')
        wd_Description.pack(fill='x')

        content_text = content[i].text.strip()
        # estimated_lines = content_text.count('\n') + 1
        # estimated_lines = len(re.findall(r'\r\n|\r|\n', content_text)) + 1
        content_text = re.sub(r'(?<=\n)\s+', '', content_text)
        estimated_lines = calculate_required_lines(content_text, font_size=15, width=550)  # 请根据实际情况调整字体大小和宽度
        
        # print(content_text)
        text_widget = tk.Text(frame,wrap=tk.WORD, state='disabled',  font=("黑体",15), height=estimated_lines, width=100)
        text_widget.configure(state='normal')
        text_widget.insert("insert", content_text)
        text_widget.configure(state='disabled')
        
        copy_button = tk.Button(frame, text="Copy", command=lambda text=content_text: copy_text(text))
        text_widget.pack(fill=BOTH, expand=True)
        if  Description[i].text=="Sample Output" or Description[i].text == "Sample Input":
            copy_button.pack()

    submit_button = ttk.Button(window, text="Submit", command=lambda: submit_problem("a",problem_id))
    submit_button.pack(padx=10, pady=10)
    frame.update_idletasks()
    canvas.pack(fill=tk.BOTH, expand=True)
    # canvas_height = screen_height - 100
    # canvas.config(scrollregion=canvas.bbox("all"), height=canvas_height)
    canvas.config(scrollregion=canvas.bbox("all"))
    canvas.bind_all("<MouseWheel>", on_mouse_wheel)
    
    window.mainloop()

    # print(soup.select(title))
    # document.querySelector("body > table.body_table > tbody > tr > td.right_table > table.problem_mod > tbody > tr:nth-child(1) > td")

# get_problem_info("http://acm.hrbust.edu.cn/contests/index.php?act=showproblem&cid=2085&p=A") 