'''
author: yihang_01
Date: 2023-08-28 22:39:44
LastEditTime: 2023-08-31 16:34:00
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
from tkhtmlview import HTMLLabel

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
    # 'Cookie': 'last_problem_vol=16; PHPSESSID=eghmt5akhu5hk4et6mhd01nri0',
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

def goToproblem_info(list,contest_problemslist):
    global session
    print("double click")
    selection = list.curselection()
    if selection:
        index = selection[0]
        problem = list.get(index).split("    ")[2]
        print(contest_problemslist[problem])
        cpi.get_problem_info(url + '/contests/' + contest_problemslist[problem])
        # session.cookies.update(cookies)
        # cookies = session.cookies
        # # print(cookies)
        # page = session.get(url + '/contests/' + contest_problemslist[problem], headers=headers, data=data)
        # print(page.text,file=f)
        # print(page.text)
        # print(3,session.cookies)
        # print(url + '/' + contest_problemslist[problem])
    else:
        print("No item selected")


def get_contest_info(url):
    contest_problemslist={}
    global session
    print(2,session.cookies)
    url=url.replace("problems","login")
    # print(url)
    cid=url.split("cid=")[1]
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
    window = tk.Tk()
    window.title("HTML Display")

    # Create an HTMLLabel to display the HTML content
    html_label = HTMLLabel(window, html=page.text)
    html_label.pack(fill="both", expand=True)

    # Start the Tkinter event loop
    window.mainloop()


get_contest_info("http://acm.hrbust.edu.cn/contests/index.php?act=login&cid=2085")