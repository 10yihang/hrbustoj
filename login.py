'''
author: yihang_01
Date: 2023-08-27 23:59:55
LastEditTime: 2023-08-29 17:20:56
Description: 爱自己最重要啦
QwQ 加油加油
'''
'''
author: yihang_01
Date: 2023-08-27 23:59:55
LastEditTime: 2023-08-29 12:55:30
Description: 爱自己最重要啦
QwQ 加油加油
'''
# -*- coding: utf-8 -*-
import requests
from bs4 import BeautifulSoup
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_v1_5
import json
import base64

login_rsa_public_key = """-----BEGIN PUBLIC KEY-----
MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC88fBRU1FaC5S537krMDVDapOZk44Nw+Yud69IPZYwk9HT0n6D7Pvp3mXp+Par6gp5HUW3tFs7/l3cTIqryEXMfJXRF7FlneM64kLs/KZ2i0larVrz7QgcTb5oAuHeIE24Uc0ja+S83Hlc2Dk6z1TWkAjG2f/p15xRfv/IO5yyywIDAQAB
-----END PUBLIC KEY-----"""

url = "http://acm.hrbust.edu.cn/contests/index.php?act=login&cid=2085"
session = requests.Session()

# soup = BeautifulSoup(response.text, 'html.parser')


# 获取用户名和密码
username = "2204010110"
password = "087116"

# 加载RSA公钥
public_key = RSA.import_key(login_rsa_public_key)
# print(public_key.text)
# 使用公钥加密用户名和密码
cipher = PKCS1_v1_5.new(public_key)
print(cipher)
data = json.dumps({"username": username, "password": password}).encode('utf-8')
print(data)
encrypted = cipher.encrypt(data)

# 将加密后的结果转换为base64编码的字符串
encoded = base64.b64encode(encrypted).decode('ascii')

print(encoded)

# 构造POST请求的数据
data = {
    'username': password,
    'password': "",
    # 'encrypt': "RTXvOiOQ95Dy4NuVzPrhfgY5cQIt4Uvv/UnW8YZLyZNxWZg3JDrCORFWolvyY6XJqSO8t3Szz8DHUD3oxs0yArlh2H/5kkvnHOzE6AVnRp8myz58Py96Xpy42geStw8jVcaulebgECh6w2ZrYBDHnUga0biinUP/fqhsXGLUtB4=",
    'encrypt': encoded,
    'jump_url': "",
    'cid' : "2085"
}

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


# params = {
#     'm': 'Contest',
#     'a': 'contestVolume',
#     'ctitle': '',
#     'ctype': '',
#     'cstate': '',
#     'page_id': '1',
# }
# 发送POST请求
response = session.post(url, headers=headers, verify=False, data=data)
f = open('20230319.html', 'w', encoding='utf-8')
# 输出响应状态码和内容
print(response.status_code)
print(response.text, file=f)
# print(response.text)