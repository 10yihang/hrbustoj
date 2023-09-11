'''
author: yihang_01
Date: 2023-09-01 22:58:19
LastEditTime: 2023-09-04 13:05:16
Description: 爱自己最重要啦
QwQ 加油加油
'''
'''
author: yihang_01
Date: 2023-09-01 22:58:19
LastEditTime: 2023-09-03 22:22:55
Description: 爱自己最重要啦
QwQ 加油加油
'''
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
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_v1_5
import json
import base64

url = "http://acm.hrbust.edu.cn"

def set_text_color(item_id, column, color, tree):
    tree.item(item_id, tags=(color,))
    tree.tag_configure(color, foreground=color)
    

def on_canvas_configure(event):
    global canvas
    canvas.configure(scrollregion=canvas.bbox("all"))

def on_mousewheel(event):
    global canvas
    canvas.yview_scroll(-1 * (event.delta // 120), "units")

def double_click_problemset(tree):
    from problemlist_problem_info import get_problem_info
    global problem_url
    # print(1)
    item = tree.selection()
    if item:
        title = tree.item(item, "values")[1]
        # print(problem_url[title])
        get_problem_info(url + problem_url[title])

def goTostatus():
    from problemlist_status import get_status_info
    get_status_info(url + "/index.php?m=Status&a=showStatus&status_vol=1","")

def goTocontest():
    # print(1)
    global window
    window.destroy()
    from hrbustoj import get_url_text
    get_url_text('1')

def goTopage(cid):
    global window
    if cid!="": 
    # print(cid)
        window.destroy()
        goTo_problemlist(cid)

def goTo_problemlist(cid):
    global window
    window = tk.Tk()
    window.title("Problem Set")
    screen_width = window.winfo_screenwidth()
    screen_height = window.winfo_screenheight()
    x = (screen_width - 1280) // 2
    y = (screen_height - 800) // 2
    # 设置窗口大小为全屏
    window.geometry(f"1280x800+{x}+{y}")
    window.lift()  # 将窗口提到前台
    window.focus_force()  # 强制窗口获得焦点 
    window.columnconfigure(0, weight=4)
    window.rowconfigure(0, weight=1)
    window.rowconfigure(1, weight=5)  # 新增行1

    page = session.get(url + "/index.php?m=ProblemSet&a=showProblemVolume&vol=" + cid)
    soup = BeautifulSoup(page.text, 'html.parser')
    total_problem = soup.find_all('tr', class_=['problemset-row0', 'problemset-row1'])

    frame = ttk.Frame(window)
    frame.grid(row=0, column=0, sticky="nsew")
    frame.columnconfigure(0, weight=4)
    frame.rowconfigure(1, weight=1)


    tree = ttk.Treeview(frame, columns=("Solved", "ProblemID", "Title", "Rating", "R(A/S)", "UR(A/S)"), show="headings")
    

    tree.heading("Solved", text="Solved")
    tree.heading("ProblemID", text="ProblemID")
    tree.heading("Title", text="Title")
    tree.heading("Rating", text="Rating")
    tree.heading("R(A/S)", text="R(A/S)")
    tree.heading("UR(A/S)", text="UR(A/S)")

    tree.column("Solved", width=100)
    tree.column("ProblemID", width=100)
    tree.column("Title", width=200)
    tree.column("Rating", width=100)
    tree.column("R(A/S)", width=150)
    tree.column("UR(A/S)", width=150)

    global problem_url
    data = [];problem_url={}
    for i in range(len(total_problem)):
        tds = total_problem[i].find_all('td')
        solved = tds[0].find_all('img')
        problem_id = tds[1].text
        title = tds[2].text
        problem_url[problem_id] = tds[2].find('a').get('href')
        rating_img = tds[3].find_all('img')
        r_as = tds[4].text
        ur_as = tds[5].text
        if solved == []: solved = 'Unsolved'
        elif solved[0].get('src') == 'Public/images/ac.gif': solved = 'Accepted'
        else: solved = 'Attempted'
        rating = 0
        for j in range(len(rating_img)):
            if rating_img[j].get('src') == 'Public/images/star-solid.png': rating += 1
            else: rating += 0.5
        data.append([solved, problem_id, title, rating, r_as, ur_as])
        item_id = tree.insert("", "end", values=(solved, problem_id, title, rating, r_as, ur_as))
        if solved == 'Accepted':
            set_text_color(item_id, "Solved", "green", tree)
        elif solved == 'Attempted':
            set_text_color(item_id, "Solved", "red", tree)
        else:
            set_text_color(item_id, "Solved", "black", tree)
    # print(problem_url)
    tree.bind("<Configure>", lambda event, tree=tree: on_tree_configure(tree))

    contest_button = ttk.Button(frame, text="Contest", command=lambda: goTocontest())
    contest_button.grid(row=0, column=0, sticky="nsew")

    status_button = ttk.Button(frame, text="Status", command=lambda: goTostatus())
    status_button.grid(row=0, column=1, sticky="nsew")

    # 创建一个子框架
    text_frame = ttk.Frame(frame)
    text_frame.grid(row=0, column=2, sticky="nsew")
    text_frame.columnconfigure(0, weight=1)
    page_id_text = tk.Text(text_frame, height=1, width=20)
    page_id_text.grid(row=0, column=0, sticky="nsew")
    page_id_text.bind('<Return>', lambda event: goTopage(page_id_text.get("1.0", "end-1c")))
    page_id_text.focus_force()
    goTo_contest_button = ttk.Button(text_frame, text="goTO!", command=lambda: goTopage(page_id_text.get("1.0", "end-1c")))
    goTo_contest_button.grid(row=0, column=1, sticky="nsew")

    scrollbar = ttk.Scrollbar(frame, orient="vertical")
    scrollbar.config(command=tree.yview)
    scrollbar.grid(row=1, column=4, sticky="ns")
    
    tree.bind("<Double-Button-1>", lambda event: double_click_problemset(tree))
    tree.grid(row=1, column=0, columnspan=3, sticky="nsew")

    window.mainloop()


def on_tree_configure(tree):
    tree.update_idletasks()
    tree_height = tree.winfo_height()
    tree.configure(height=tree_height)