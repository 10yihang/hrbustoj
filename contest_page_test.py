'''
author: yihang_01
Date: 2023-08-28 22:39:44
LastEditTime: 2023-09-01 22:12:36
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
from tkinter import *
from tkinter import ttk
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_v1_5
import json
import base64
from global_var import session
import contest_problem_info as cpi



class Problems:
    def __init__(self):
        self.solve=BeautifulSoup()
        self.url=BeautifulSoup()
        self.time=BeautifulSoup()
        self.r=BeautifulSoup()
        self.ur=BeautifulSoup()
        self.title=BeautifulSoup()
        self.ID=BeautifulSoup()

f=open('202303192.html','w',encoding='utf-8')

url = "http://acm.hrbust.edu.cn"

login_rsa_public_key = """-----BEGIN PUBLIC KEY-----
MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC88fBRU1FaC5S537krMDVDapOZk44Nw+Yud69IPZYwk9HT0n6D7Pvp3mXp+Par6gp5HUW3tFs7/l3cTIqryEXMfJXRF7FlneM64kLs/KZ2i0larVrz7QgcTb5oAuHeIE24Uc0ja+S83Hlc2Dk6z1TWkAjG2f/p15xRfv/IO5yyywIDAQAB
-----END PUBLIC KEY-----"""



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

username = "2204010110"
password = "087116"

# 加载RSA公钥
public_key = RSA.import_key(login_rsa_public_key)
# print(public_key.text)
# 使用公钥加密用户名和密码
cipher = PKCS1_v1_5.new(public_key)
# print(cipher)
data = json.dumps({"username": username, "password": password}).encode('utf-8')
# print(data)
encrypted = cipher.encrypt(data)

# 将加密后的结果转换为base64编码的字符串
encoded = base64.b64encode(encrypted).decode('ascii')

# print(encoded)

a = Problems();b = Problems()

# session = requests.Session()

# response = session.get(url)
# cookies = response.cookies
print(1,session.cookies)

def open_problems_page():
    # 在此处实现打开 Problems 页面的逻辑
    pass

def open_status_page(cid):
    from contest_page_status import get_status_info
    # 在此处实现打开 Status 页面的逻辑
    get_status_info(url + "/contests/index.php?act=status&cid=" + str(cid))

def open_statistics_page(cid):
    from contest_page_statistics import get_statistics_info
    # 在此处实现打开 Statistics 页面的逻辑
    get_statistics_info(url + "/contests/index.php?act=statistics&cid=" + str(cid))

def open_ranklist_page(url):
    # 在此处实现打开 Ranklist 页面的逻辑
    pass



def goToproblem_info(list,contest_problemslist):
    global session
    print("double click")
    selection = list.curselection()
    if selection:
        index = selection[0]
        problem = list.get(index).split("    ")[2]
        # print(contest_problemslist[problem])
        cpi.get_problem_info(url + '/contests/' + contest_problemslist[problem])
        # session.cookies.update(cookies)
        # cookies = session.cookies
        # print(cookies)
        # page = session.get(url + '/contests/' + contest_problemslist[problem], headers=headers, data=data)
        # print(page.text,file=f)
        # print(page.text)
        # print(3,session.cookies)
        # print(url + '/' + contest_problemslist[problem])
    else:
        print("No item selected")


def get_contest_info(url):
    window = tk.Tk()
    window.title("hrbustoj_contest_info")
    window.geometry("800x600+600+200")
    contest_problemslist={}
    global session
    print(2,session.cookies)
    url=url.replace("problems","login")
    # print(url)
    cid=url.split("cid=")[1]
    
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
    problems_button.pack(side=LEFT, padx=10)
    status_button.pack(side=LEFT, padx=10)
    statistics_button.pack(side=LEFT, padx=10)
    ranklist_button.pack(side=LEFT, padx=10)
    
    button_frame.pack(side=TOP, fill=X)
    
    # print(cid)
    # print(encoded)
    data = {
        'username': username,
        'password': "",
        'encrypt': encoded,
        'jump_url': "",
        'cid' : str(cid)
    }
    page = session.post(url, headers=headers,data=data,verify=False)
    print(page.text,file=f)
    soup = BeautifulSoup(page.text, 'html.parser')
    # print(soup)
    base0 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.problemset-row0"
    base1 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.problemset-row1"
    context_problems_name0 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.problemset-row0 > td:nth-child(3) > a "
    context_problems_name1 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.problemset-row1 > td:nth-child(3) > a "
    context_problems_solve0 = base0 + " > td:nth-child(1) "
    context_problems_solve1 = base1 + " > td:nth-child(1) "
    solve_js = "td > img"

    context_problems_r0 = base0 + " > td:nth-child(4)"
    context_problems_r1 = base1 + " > td:nth-child(4)" 

    context_problems_ur0 = base0 + " > td:nth-child(5)"
    context_problems_ur1 = base1 + " > td:nth-child(5)"

    problem0=soup.select(context_problems_name0)
    problem1=soup.select(context_problems_name1)
    solve0=soup.select(context_problems_solve0)
    solve1=soup.select(context_problems_solve1)
    r0=soup.select(context_problems_r0)
    r1=soup.select(context_problems_r1)
    ur0=soup.select(context_problems_ur0)
    ur1=soup.select(context_problems_ur1)
    
    # print(problem1)
    # print(solve1)
    # print(r0)
    # print(ur0)

    for i in range(0,len(problem0)):
        a.url[i] = problem0[i].get('href')
        a.title[i] = problem0[i].text
        c = solve0[i].select(solve_js)
        if c!=[]: a.solve[i] = c[0].get('src').split("/")[1].split(".")[0]
        else: a.solve[i] = "O"
        if a.solve[i] == "ac": a.solve[i] = "√"
        if a.solve[i] == "unac": a.solve[i] = "X"
        a.r[i] = r0[i].text
        a.ur[i] = ur0[i].text
        a.ID[i] = a.url[i].split("p=")[1]
        # print(a.solve[i])
    for i in range(0,len(problem1)):
        b.url[i] = problem1[i].get('href')
        b.title[i] = problem1[i].text
        c = solve1[i].select(solve_js)
        if c!=[]: b.solve[i] = c[0].get('src').split("/")[1].split(".")[0]
        else: b.solve[i] = "O"
        if b.solve[i] == "ac": b.solve[i] = "√"
        if b.solve[i] == "unac": b.solve[i] = "X"
        b.r[i] = r1[i].text
        b.ur[i] = ur1[i].text
        b.ID[i] = b.url[i].split("p=")[1]
        # print(b.solve[i])
    
    l = 0;r = 0;

    # problem_button = Button(window, text="problem", command=lambda: get_problem_info(url))

    scrollbar = Scrollbar(window)
    scrollbar.pack(side=RIGHT, fill=Y)
    list = Listbox(window, yscrollcommand=scrollbar.set, height=15,font=("Helvetica",20))
    list.insert(END, "                        contest_problemslist")

    cnt = 0
    for i in range(0,len(problem1)+len(problem0)):
        if i%2==0:
            contest_problemslist[a.title[l]]=a.url[l]
            list.insert(END, str(a.solve[l]) + "    " + str(a.ID[l]) + "    " + str(a.title[l]) + "    " + str(a.r[l]) +  "    " + str(a.ur[l]))
            cnt+=1
            l+=1
        else:
            contest_problemslist[b.title[r]]=b.url[r]
            list.insert(END, str(b.solve[r]) + "    " + str(b.ID[r]) + "    " + str(b.title[r]) + "    " + str(b.r[r]) + "    " + str(b.ur[r]))
            cnt+=1
            r+=1
    # print(list)
    list.bind("<Double-Button-1>", lambda event: goToproblem_info(list,contest_problemslist))
    # print(contest_problemslist)
    list.pack(fill=BOTH)
    scrollbar.config(command=list.yview)
    window.mainloop()


get_contest_info("http://acm.hrbust.edu.cn/contests/index.php?act=login&cid=2085")