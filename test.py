'''
author: yihang_01
Date: 2023-08-26 22:45:05
LastEditTime: 2023-08-27 19:42:47
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

class ojlist:
    def __init__(self):
        self.name=BeautifulSoup()
        self.url=BeautifulSoup()
        self.time=BeautifulSoup()
        self.status=BeautifulSoup()
        self.access=BeautifulSoup()

window = tk.Tk()
window.title("hrbustoj")
window.geometry("600x400+600+200")
# window.mainloop()


a=ojlist();b=ojlist();ojlisturl={}

f=open('hrbustoj.txt','w',encoding='utf-8')

url = "http://acm.hrbust.edu.cn/index.php?m=Contest&a=contestVolume&ctitle=&ctype=&cstate=&page_id=1"
import requests

cookies = {
    'last_problem_vol': '16',
    'PHPSESSID': 'gfneklckpmd3dim8df0hb4m326',
}

headers = {
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7',
    'Accept-Language': 'zh-CN,zh;q=0.9,en;q=0.8,en-GB;q=0.7,en-US;q=0.6',
    'Cache-Control': 'max-age=0',
    # 'Cookie': 'last_problem_vol=16; PHPSESSID=gfneklckpmd3dim8df0hb4m326',
    'Proxy-Connection': 'keep-alive',
    'Referer': 'http://acm.hrbust.edu.cn/index.php?m=Contest&a=contestVolume&ctitle=&ctype=&cstate=&page_id=2',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.54',
}

params = {
    'm': 'Contest',
    'a': 'contestVolume',
    'ctitle': '',
    'ctype': '',
    'cstate': '',
    'page_id': '1',
}

response = requests.get('http://acm.hrbust.edu.cn/index.php', params=params, cookies=cookies, headers=headers, verify=False)
page_text = requests.get(url=url,headers=headers,params=params,cookies=cookies).text #请求发送

soup=BeautifulSoup(page_text,'lxml')

# print(text,file=f)
# document.querySelector("body > table.body_table > tbody > tr > td.right_table > table.ojlist > tbody > tr:nth-child(2) > td:nth-child(1) > a")

content0="body > table.body_table > tr > td.right_table > table.ojlist > tr.ojlist-row0 > td > a"
content1="body > table.body_table > tr > td.right_table > table.ojlist > tr.ojlist-row1 > td > a"
select_access0 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.ojlist-row0 > td:nth-child(3)"
select_access1 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.ojlist-row1 > td:nth-child(3)"
select_status0 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.ojlist-row0 > td:nth-child(4)"
select_status1 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.ojlist-row1 > td:nth-child(4)"
select_time0 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.ojlist-row0 > td:nth-child(2)"
select_time1 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.ojlist-row1 > td:nth-child(2)"

b.name=soup.select(content1)
a.name=soup.select(content0)
a.time=soup.select(select_time0)
b.time=soup.select(select_time1)
a.status=soup.select(select_status0)
b.status=soup.select(select_status1)
a.access=soup.select(select_access0)
b.access=soup.select(select_access1)

for i in range(0,len(a.name)):
    a.url[i] = a.name[i].get('href')
    a.name[i] = a.name[i].text
    a.time[i] = a.time[i].text
    a.status[i] = a.status[i].text
    a.access[i] = a.access[i].text
for i in range(0,len(b.name)):
    b.url[i] = b.name[i].get('href')
    b.name[i] = b.name[i].text
    b.time[i] = b.time[i].text
    b.status[i] = b.status[i].text
    b.access[i] = b.access[i].text
l = 0;r = 0;

# print(type(list))
# list.pack()
# window.mainloop()
cnt = 0
for i in range(0,len(a.name)+len(b.name)):
    if i%2==0:
        ojlisturl[a.name[l]]=a.url[l]
        print(a.name[l],a.url[l],file=f)
        list = tk.Label(window, text=str(cnt) + "    " + str(a.name[l]) + "    " + str(a.time[l]) + "    " + str(a.status[l]) +  "    " + str(a.access[l]))
        list.pack()
        cnt+=1
        l+=1
    else:
        ojlisturl[b.name[r]]=b.url[r]
        print(b.name[r],b.url[r],file=f)
        list = tk.Label(window, text=str(cnt) + "    " + str(b.name[r]) + "    " + str(b.time[r]) + "    " + str(b.status[r]) + "    " + str(b.access[r]))
        list.pack()
        cnt+=1
        r+=1
window.mainloop()
# list.pack()
# print(a)
# document.querySelector("body > table.body_table > tbody > tr > td.right_table > table.ojlist > tbody > tr")