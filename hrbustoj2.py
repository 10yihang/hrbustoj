'''
author: yihang_01
Date: 2023-08-28 22:05:17
LastEditTime: 2023-09-01 19:11:19
Description: 爱自己最重要啦
QwQ 加油加油
'''
'''
author: yihang_01
Date: 2023-08-28 22:05:17
LastEditTime: 2023-08-29 22:32:24
Description: 爱自己最重要啦
QwQ 加油加油
'''
'''
author: yihang_01
Date: 2023-08-28 22:05:17
LastEditTime: 2023-08-28 23:33:25
Description: 爱自己最重要啦
QwQ 加油加油
'''
'''
author: yihang_01
Date: 2023-08-26 22:45:05
LastEditTime: 2023-08-28 23:07:40
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
# session=requests.Session()

url = "http://acm.hrbust.edu.cn"

login_rsa_public_key = """-----BEGIN PUBLIC KEY-----
MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC88fBRU1FaC5S537krMDVDapOZk44Nw+Yud69IPZYwk9HT0n6D7Pvp3mXp+Par6gp5HUW3tFs7/l3cTIqryEXMfJXRF7FlneM64kLs/KZ2i0larVrz7QgcTb5oAuHeIE24Uc0ja+S83Hlc2Dk6z1TWkAjG2f/p15xRfv/IO5yyywIDAQAB
-----END PUBLIC KEY-----"""

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

class ojlist:
    def __init__(self):
        self.name=BeautifulSoup()
        self.url=BeautifulSoup()
        self.time=BeautifulSoup()
        self.status=BeautifulSoup()
        self.access=BeautifulSoup()




f=open('hrbustoj.txt','w',encoding='utf-8')

# 获取用户名和密码
username = "2204010110"
password = "087116"

# 加载RSA公钥
public_key = RSA.import_key(login_rsa_public_key)
# print(public_key.text)
# 使用公钥加密用户名和密码
cipher = PKCS1_v1_5.new(public_key)
print(cipher)
data = json.dumps({"user_name": username, "password": password}).encode('utf-8')
print(data)
encrypted = cipher.encrypt(data)

# 将加密后的结果转换为base64编码的字符串
encoded = base64.b64encode(encrypted).decode('ascii')

data = {
    'm' : 'User',
    'a' : 'login',
    'encrypt' : encoded,
    'ajax' : 1
}


def double_click_ojlist(list,ojlisturl):
    print("double click")
    # print(list)
    selection = list.curselection()
    if selection:
        index = selection[0]
        contest = list.get(index).split("    ")[1]
        # print(ojlisturl[contest])
        cp.get_contest_info(url + '/' + ojlisturl[contest])
    else:
        print("No item selected")
    
    
def get_url_text(page_id):
    global session
    def goTopage(window):
        global page_id
        page_id = page_id_text.get("1.0", "end-1c")
        if page_id != "":
            window.destroy()
            get_url_text(page_id)
        
    a=ojlist();b=ojlist();ojlisturl={}
    window = tk.Tk()
    window.title("hrbustoj")
    window.geometry("800x600+600+200")

    response = session.get(url + "/index.php?m=Contest&a=contestVolume&ctitle=&ctype=&cstate=&page_id=" + page_id, headers=headers, verify=False)
    page_text = response.text #请求发送
    soup=BeautifulSoup(page_text,'lxml')
    # print(page_text)

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

    scrollbar = Scrollbar(window)
    scrollbar.pack(side=RIGHT, fill=Y)
    list = Listbox(window, yscrollcommand=scrollbar.set, height=50)

    cnt = 0
    for i in range(0,len(a.name)+len(b.name)):
        if i%2==0:
            ojlisturl[a.name[l]]=a.url[l]
            print(a.name[l],a.url[l],file=f)
            list.insert(END, str(cnt) + "    " + str(a.name[l]) + "    " + str(a.time[l]) + "    " + str(a.status[l]) +  "    " + str(a.access[l]))
            cnt+=1
            l+=1
        else:
            ojlisturl[b.name[r]]=b.url[r]
            print(b.name[r],b.url[r],file=f)
            list.insert(END, str(cnt) + "    " + str(b.name[r]) + "    " + str(b.time[r]) + "    " + str(b.status[r]) + "    " + str(b.access[r]))
            cnt+=1
            r+=1


    page_id_text = tk.Text(window, height=1,width=20)
    button1 = Button(window, text="goTO!", command = lambda: goTopage(window))
    page_id_text.pack(side=TOP)
    button1.pack(side=TOP)

    list.bind("<Double-Button-1>", lambda event: double_click_ojlist(list,ojlisturl))
    list.pack(fill=BOTH)
    page_id_text.bind('<Return>', lambda event: double_click_ojlist(list,ojlisturl))
    scrollbar.config(command=list.yview)
    window.mainloop()



session.post(url + '/index.php?m=User&a=login', data=data, headers=headers, verify=False)
# tt = session.get(url + '/index.php?m=Contest&a=contestVolume&ctitle=&ctype=&cstate=&page_id=1', headers=headers, verify=False)
# print(tt.text)

get_url_text('1')
# list.pack()
# print(a)
# document.querySelector("body > table.body_table > tbody > tr > td.right_table > table.ojlist > tbody > tr")