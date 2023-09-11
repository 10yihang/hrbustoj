import requests
import os

# 获取当前程序的目录
current_directory = os.path.dirname(os.path.abspath(__file__))

# 构建 login.txt 的绝对路径
login_file_path = os.path.join(current_directory, "login.txt")
session = requests.Session()

url = "http://acm.hrbust.edu.cn"

session.get(url)

cookies = {
    'last_problem_vol': '16',
}

import os

# login_file_path = "path_to_your_file.txt"  # 替换成你的文件路径

# 检查文件是否存在
if os.path.exists(login_file_path):
    with open(login_file_path, "r") as file:
        # 逐行读取文件内容
        lines = file.readlines()
    # 执行文件内容的处理
    # ...
else:
    print("文件不存在，请提供有效的文件路径。")

lines = [line.strip() for line in lines]

contest_username = lines[0].split(":")[1]
contest_password = lines[1].split(":")[1]
global_username = lines[2].split(":")[1]
global_password = lines[3].split(":")[1]

print("Contest Username:", contest_username)
print("Contest Password:", contest_password)
print("Global Username:", global_username)
print("Global Password:", global_password)

session.cookies.update(cookies)

print(0,session.cookies,"globals")

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
