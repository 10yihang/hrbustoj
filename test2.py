'''
author: yihang_01
Date: 2023-08-27 11:23:54
LastEditTime: 2023-08-27 11:32:28
Description: 爱自己最重要啦
QwQ 加油加油
'''
import os
import requests
from bs4 import BeautifulSoup
#爬虫头数据
cookies = {
    'SINAGLOBAL': '6797875236621.702.1603159218040',
    'SUB': '_2AkMXbqMSf8NxqwJRmfkTzmnhboh1ygvEieKhMlLJJRMxHRl-yT9jqmg8tRB6PO6N_Rc_2FhPeZF2iThYO9DfkLUGpv4V',
    'SUBP': '0033WrSXqPxfM72-Ws9jqgMF55529P9D9Wh-nU-QNDs1Fu27p6nmwwiJ',
    '_s_tentry': 'www.baidu.com',
    'UOR': 'www.hfut.edu.cn,widget.weibo.com,www.baidu.com',
    'Apache': '7782025452543.054.1635925669528',
    'ULV': '1635925669554:15:1:1:7782025452543.054.1635925669528:1627316870256',
}
headers = {
    'Connection': 'keep-alive',
    'Cache-Control': 'max-age=0',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/84.0.4147.89 Safari/537.36 SLBrowser/7.0.0.6241 SLBChan/25',
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9',
    'Sec-Fetch-Site': 'cross-site',
    'Sec-Fetch-Mode': 'navigate',
    'Sec-Fetch-User': '?1',
    'Sec-Fetch-Dest': 'document',
    'Accept-Language': 'zh-CN,zh;q=0.9',
}
params = (
    ('cate', 'realtimehot'),
)
#数据存储
fo = open("./微博热搜.txt",'a',encoding="utf-8")
#获取网页
response = requests.get('https://s.weibo.com/top/summary', headers=headers, params=params, cookies=cookies)
#解析网页
response.encoding='utf-8'
soup = BeautifulSoup(response.text, 'html.parser')
#爬取内容
# content="#pl_top_realtimehot > table > tbody > tr > td.td-02 > a"
content="#pl_top_realtimehot > table > tbody > tr > td.td-02 > a"
#清洗数据
a=soup.select(content)
print(a)
for i in range(0,len(a)):
    a[i] = a[i].text
    fo.write(a[i]+'\n')
fo.close()
# document.querySelector("#pl_top_realtimehot > table > tbody > tr:nth-child(1) > td.td-02 > a")