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

class Problems:
    def __init__(self):
        self.solve=BeautifulSoup()
        self.url=BeautifulSoup()
        self.time=BeautifulSoup()
        self.r=BeautifulSoup()
        self.ur=BeautifulSoup()
        self.title=BeautifulSoup()
        self.ID=BeautifulSoup()

f=open('hrbustoj.txt','w',encoding='utf-8')

url = "http://acm.hrbust.edu.cn"

cookies = {
    'last_problem_vol': '16',
    'PHPSESSID' : 'lglob604lp2if74qq5md6jtp73'
}

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

a = Problems();b = Problems()

def get_contest_info(url):
    print(url)
    window = tk.Tk()
    window.title("hrbustoj_contest_info")
    window.geometry("600x400+600+200")
    page = requests.get(url, headers=headers, cookies=cookies)
    soup = BeautifulSoup(page.text, 'html.parser')
    print(soup)
    base = "body > table.body_table > tr > td.right_table > table.ojlist > tr.problemset-row0"
    context_problems_name0 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.problemset-row0 > td:nth-child(3) "
    context_problems_name1 = "body > table.body_table > tr > td.right_table > table.ojlist > tr.problemset-row1 > td:nth-child(3) "
    # context_problems_solve = 
    problem0=soup.select(context_problems_name0)
    problem1=soup.select(context_problems_name1)
    # print(problem0)
    # document.querySelector("body > table.body_table > tbody > tr > td.right_table > table.ojlist > tbody > tr:nth-child(2) > td:nth-child(3) > a")