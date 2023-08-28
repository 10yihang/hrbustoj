'''
author: yihang_01
Date: 2023-08-26 22:45:05
LastEditTime: 2023-08-26 22:51:00
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

url = "http://acm.hrbust.edu.cn"
headers = "/index.php?m=Contest&a=contestVolume&ctitle=&ctype=&cstate=&page_id=1"
page_text = requests.get(url=url, headers=headers).text #请求发送
tree = etree.HTML(page_text) #数据解析
print(tree)