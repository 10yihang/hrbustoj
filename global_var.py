import requests
import os
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_v1_5
import json
import base64
import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QVBoxLayout, QWidget, QLabel, QLineEdit, QPushButton, \
    QDesktopWidget
from PyQt5 import QtGui
from bs4 import BeautifulSoup

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


# login_file_path = "path_to_your_file.txt"  # 替换成你的文件路径
# print("login_file_path:", login_file_path)
# 检查文件是否存在
class LoginWindow(QMainWindow):
    def center(self):  # 定义一个函数使得窗口居中显示
        # 获取屏幕坐标系
        screen = QDesktopWidget().screenGeometry()
        # 获取窗口坐标系
        size = self.geometry()
        newLeft = (screen.width() - size.width()) / 2
        newTop = (screen.height() - size.height()) / 2
        self.move(int(newLeft), int(newTop))

    def __init__(self):
        super().__init__()

        self.setWindowTitle("Login")
        self.resize(400, 200)
        self.setWindowIcon(QtGui.QIcon(current_directory + "\img\\003.jpg"))

        central_widget = QWidget(self)
        self.setCentralWidget(central_widget)

        layout = QVBoxLayout()

        self.label_global_username = QLabel("Global Username:")
        self.input_global_username = QLineEdit()
        layout.addWidget(self.label_global_username)
        layout.addWidget(self.input_global_username)

        self.label_global_password = QLabel("Global Password:")
        self.input_global_password = QLineEdit()
        layout.addWidget(self.label_global_password)
        layout.addWidget(self.input_global_password)

        self.label_contest_username = QLabel("Contest Username:")
        self.input_contest_username = QLineEdit()
        layout.addWidget(self.label_contest_username)
        layout.addWidget(self.input_contest_username)

        self.label_contest_password = QLabel("Contest Password:")
        self.input_contest_password = QLineEdit()
        layout.addWidget(self.label_contest_password)
        layout.addWidget(self.input_contest_password)

        self.submit_button = QPushButton("Submit")
        layout.addWidget(self.submit_button)

        central_widget.setLayout(layout)

        self.submit_button.clicked.connect(self.save_credentials)

    def save_credentials(self):
        global_username = self.input_global_username.text()
        global_password = self.input_global_password.text()
        contest_username = self.input_contest_username.text()
        contest_password = self.input_contest_password.text()

        with open(login_file_path, "w") as file:
            file.write(f"global_username:{global_username}\n")
            file.write(f"global_password:{global_password}\n")
            file.write(f"contest_username:{contest_username}\n")
            file.write(f"contest_password:{contest_password}\n")

        self.close()


if os.path.exists(login_file_path):
    with open(login_file_path, "r") as file:
        # 逐行读取文件内容
        lines = file.readlines()
    # 执行文件内容的处理
    # ...
else:
    app = QApplication(sys.argv)

    login_window = LoginWindow()
    login_window.center()
    login_window.show()
    sys.exit(app.exec_())
    with open(login_file_path, "r") as file:
        # 逐行读取文件内容
        lines = file.readlines()
    # print("文件不存在，请提供有效的文件路径。")

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

print(0, session.cookies, "globals")

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
        self.name = BeautifulSoup()
        self.url = BeautifulSoup()
        self.time = BeautifulSoup()
        self.status = BeautifulSoup()
        self.access = BeautifulSoup()


# f=open('hrbustoj.txt','w',encoding='utf-8')

# 获取用户名和密码

# 加载RSA公钥
public_key = RSA.import_key(login_rsa_public_key)
# print(public_key.text)
# 使用公钥加密用户名和密码
cipher = PKCS1_v1_5.new(public_key)
# print(cipher)
data = json.dumps({"user_name": global_username, "password": global_password}).encode('utf-8')
# print(data)
encrypted = cipher.encrypt(data)

# 将加密后的结果转换为base64编码的字符串
encoded = base64.b64encode(encrypted).decode('ascii')

data = {
    'm': 'User',
    'a': 'login',
    'encrypt': encoded,
    'ajax': 1
}

# params = {
#     'm': 'Contest',
#     'a': 'contestVolume',
#     'ctitle': '',
#     'ctype': '',
#     'cstate': '',
#     'page_id': '1',
# }
session.post(url + '/index.php?m=User&a=login', data=data, headers=headers, verify=False)
