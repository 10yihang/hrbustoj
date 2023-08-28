'''
author: yihang_01
Date: 2023-08-26 22:45:05
LastEditTime: 2023-08-27 23:57:38
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
from selenium import webdriver

contest=""

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

url = "http://acm.hrbust.edu.cn"
import requests

def double_click_ojlist(self):
    contest = list.get(list.curselection()).split("    ")[1]
    print(contest)
    print(ojlisturl[contest])
    
    

cookies = {
    'last_problem_vol': '16',
    'PHPSESSID': '0h4s1n01ofvm9he3239n28f1o2',
    
}

headers = {
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7',
    'Accept-Language': 'zh-CN,zh;q=0.9,en;q=0.8,en-GB;q=0.7,en-US;q=0.6',
    'Cache-Control': 'max-age=0',
    # 'Cookie': 'last_problem_vol=16; PHPSESSID=0h4s1n01ofvm9he3239n28f1o2',
    'Proxy-Connection': 'keep-alive',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.62',
}

params = {
    'act': 'login',
    'cid': '2085',
}


page_text = requests.get(url="http://acm.hrbust.edu.cn/contests/index.php?act=login&cid=2085",headers=headers,params=params,cookies=cookies,verify=False).text #请求发送

page_text = requests.post(url="http://acm.hrbust.edu.cn/contests/index.php?act=login&cid=2085",)


soup=BeautifulSoup(page_text,'lxml')
print(soup,file=f)
login_rsa_public_key="-----BEGIN PUBLIC KEY-----MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC88fBRU1FaC5S537krMDVDapOZk44Nw+Yud69IPZYwk9HT0n6D7Pvp3mXp+Par6gp5HUW3tFs7/l3cTIqryEXMfJXRF7FlneM64kLs/KZ2i0larVrz7QgcTb5oAuHeIE24Uc0ja+S83Hlc2Dk6z1TWkAjG2f/p15xRfv/IO5yyywIDAQAB-----END PUBLIC KEY-----"
