"""
author: yihang_01
Date: 2023-09-13 19:02:30
LastEditTime: 2023-09-17 19:10:11
Description: 爱自己最重要啦
QwQ 加油加油
"""
import base64
import ctypes
import json
import os
import sys

from Crypto.Cipher import PKCS1_v1_5
from Crypto.PublicKey import RSA
from PyQt5 import QtCore
# from PyQt5.QtGui import QColor
from PyQt5 import QtGui
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QStandardItemModel, QStandardItem
from PyQt5.QtWidgets import QApplication, QMainWindow, QTableView, QVBoxLayout, QWidget, QPushButton, QLabel, QLineEdit, \
    QHBoxLayout, QComboBox, QDesktopWidget, QAbstractItemView, QHeaderView
from bs4 import BeautifulSoup

from global_var import session, global_username, global_password

ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID("myappid")

# session=requests.Session()

# 获取当前程序的目录
contest_url = {}

url = "http://acm.hrbust.edu.cn"

login_rsa_public_key = """-----BEGIN PUBLIC KEY-----
MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC88fBRU1FaC5S537krMDVDapOZk44Nw+Yud69IPZYwk9HT0n6D7Pvp3mXp+Par6gp5HUW3tFs7/l3cTIqryEXMfJXRF7FlneM64kLs/KZ2i0larVrz7QgcTb5oAuHeIE24Uc0ja+S83Hlc2Dk6z1TWkAjG2f/p15xRfv/IO5yyywIDAQAB
-----END PUBLIC KEY-----"""

headers = {
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,'
              'application/signed-exchange;v=b3;q=0.7',
    'Accept-Language': 'zh-CN,zh;q=0.9,en;q=0.8,en-GB;q=0.7,en-US;q=0.6',
    'Cache-Control': 'max-age=0',
    # 'Cookie': 'last_problem_vol=16; PHPSESSID=gfneklckpmd3dim8df0hb4m326',
    'Proxy-Connection': 'keep-alive',
    # 'Referer': 'http://acm.hrbust.edu.cn/index.php?m=Contest&a=contestVolume&ctitle=&ctype=&cstate=&page_id=1',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 '
                  'Safari/537.36 Edg/116.0.1938.54',
}

current_directory = os.path.dirname(os.path.abspath(__file__))


# print(current_directory)

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


def goTopage(page_id, ctitle, ctype, cstate):
    if page_id == "":
        page_id == "1"
    params = {
        "page_id": page_id,
        "ctitle": ctitle,
        "ctype": ctype,
        "cstate": cstate
    }
    global window
    window.close()
    window.initUI(params)
    window.center()
    window.show()
    # print(params)
    # main(params)


class ContestApp(QMainWindow):
    query_signal = QtCore.pyqtSignal(str, str, str, str)

    def __init__(self):
        super().__init__()
        # 设置窗口大小为全屏
        self.setWindowTitle("hrbustoj")
        self.resize(1280, 800)
        self.setWindowTitle("HrBustOJ Contest")
        self.setWindowIcon(QtGui.QIcon(current_directory + "\img\\003.jpg"))
        # print(current_directory+"\img\\001.ico")
        # self.setWindowIcon(QtGui.QIcon("./img/001.ico"))

        # 创建一个数据模型..

    def onEnterPressed(self):
        self.perform_query()

    def center(self):  # 定义一个函数使得窗口居中显示
        # 获取屏幕坐标系
        screen = QDesktopWidget().screenGeometry()
        # 获取窗口坐标系
        size = self.geometry()
        newLeft = (screen.width() - size.width()) / 2
        newTop = (screen.height() - size.height()) / 2
        self.move(int(newLeft), int(newTop))

    def initUI(self, params):
        # 创建标题、访问和状态的查询文本框以及"查询"按钮
        self.title_label = QLabel("Title:")
        self.access_label = QLabel("Access:")
        self.state_label = QLabel("State:")
        self.page_label = QLabel("Page:")

        self.title_edit = QLineEdit()
        self.title_edit.returnPressed.connect(self.onEnterPressed)
        self.access_combo = QComboBox()
        # self.access_combo.addItems(["All", "Public", "Register", "Private"],["","1","2","3"])  # 添加选项
        self.access_combo.addItem("All")
        self.access_combo.setItemData(self.access_combo.count() - 1, "", role=Qt.UserRole)  # 设置关联值为""
        self.access_combo.addItem("Public")
        self.access_combo.setItemData(self.access_combo.count() - 1, "1", role=Qt.UserRole)  # 设置关联值为"1"
        self.access_combo.addItem("Register")
        self.access_combo.setItemData(self.access_combo.count() - 1, "2", role=Qt.UserRole)  # 设置关联值为"2"
        self.access_combo.addItem("Private")
        self.access_combo.setItemData(self.access_combo.count() - 1, "3", role=Qt.UserRole)  # 设置关联值为"3"

        self.access_combo.setCurrentIndex(0)  # 设置默认选项
        self.status_combo = QComboBox()
        self.status_combo.addItems(["All", "Pending", "Running", "Finished"])
        self.status_combo.setCurrentText("All")
        self.page_edit = QLineEdit()
        self.page_edit.returnPressed.connect(self.onEnterPressed)
        # self.page_edit.setFocus()
        self.query_button = QPushButton("查询")
        self.query_button.clicked.connect(self.perform_query)

        self.contest_button = QPushButton("Contest")
        self.problem_button = QPushButton("Problem")
        self.problem_button.clicked.connect(self.GoToProblem_list)
        self.rating_button = QPushButton("Rating")
        self.rating_button.clicked.connect(self.GoToGlobal_Rating)
        self.status_button = QPushButton("Status")
        self.status_button.clicked.connect(self.GoToGlobal_status)
        # 创建一个布局管理器，将标签、文本框和按钮垂直排列

        self.contest_button.setFixedHeight(50)
        self.problem_button.setFixedHeight(50)
        self.rating_button.setFixedHeight(50)
        self.status_button.setFixedHeight(50)

        com_layout = QHBoxLayout()
        com_layout.addWidget(self.contest_button)
        com_layout.addWidget(self.problem_button)
        com_layout.addWidget(self.rating_button)
        com_layout.addWidget(self.status_button)

        top_layout = QHBoxLayout()
        top_layout.addWidget(self.title_label)
        top_layout.addWidget(self.title_edit)
        top_layout.addWidget(self.access_label)
        top_layout.addWidget(self.access_combo)
        top_layout.addWidget(self.state_label)
        top_layout.addWidget(self.status_combo)
        top_layout.addWidget(self.page_label)
        top_layout.addWidget(self.page_edit)
        top_layout.addWidget(self.query_button)

        # 创建表格视图和数据模型
        self.table_view = QTableView()
        self.model = QStandardItemModel()
        self.model.setColumnCount(4)
        self.model.setHorizontalHeaderLabels(["Contest Title", "Start Time", "Access", "State"])

        page = session.post(url + "/index.php?m=Contest&a=contestVolume", params=params)
        # print(page.text)
        soup = BeautifulSoup(page.text, 'html.parser')

        contest = soup.find_all("tr", class_=["ojlist-row0", "ojlist-row1"])

        global contest_url
        contest_url = {}
        data = []

        # 添加数据到模型...
        for i in range(len(contest)):
            tds = contest[i].find_all('td')
            title = tds[0].text.strip()
            time = tds[1].text
            access = tds[2].text.strip()
            state = tds[3].text.strip()
            contest_url[title] = tds[0].find('a').get('href')
            data.append([title, time, access, state])

        for row_data in data:
            row_items = [QStandardItem(item) for item in row_data]
            self.model.appendRow(row_items)
        self.table_view.setEditTriggers(QAbstractItemView.NoEditTriggers)  # 只可读
        self.table_view.setModel(self.model)
        for row_index in range(self.model.rowCount()):
            state_item = self.model.item(row_index, 3)  # 第四列（State）
            if state_item is not None:
                state_text = state_item.text()
                if state_text == "Running":
                    state_item.setForeground(QtGui.QColor(Qt.red))
                elif state_text == "Pending":
                    state_item.setForeground(QtGui.QColor(Qt.green))
                elif state_text == "Finished":
                    state_item.setForeground(QtGui.QColor(Qt.black))
        self.table_view.doubleClicked.connect(self.GoToproblem_info)

        # # 创建一个主布局管理器，将表单部件和表格视图垂直排列
        main_layout = QVBoxLayout()
        main_layout.addLayout(com_layout)
        main_layout.addLayout(top_layout)
        main_layout.addWidget(self.table_view)

        # 创建一个QWidget作为窗口的中心部件，设置主布局管理器
        container = QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)
        # # 手动设置每一列的宽度
        # self.table_view.setColumnWidth(0, 500)
        # self.table_view.setColumnWidth(1, 300)
        # self.table_view.setColumnWidth(2, 200)
        # self.table_view.setColumnWidth(3, 200)
        # self.table_view.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)
        # 设置第一列自适应内容
        self.table_view.horizontalHeader().setSectionResizeMode(0, QHeaderView.ResizeToContents)

        # 设置其他列占满剩余空间
        for column in range(1, self.table_view.model().columnCount()):
            self.table_view.horizontalHeader().setSectionResizeMode(column, QHeaderView.Stretch)
        self.page_edit.setFocus()

    def perform_query(self):
        # 在此处执行查询操作，根据文本框中的内容过滤数据
        title_query = self.title_edit.text()
        access_query = self.access_combo.currentData()
        status_query = self.status_combo.currentText()
        page_query = self.page_edit.text()
        self.query_signal.emit(page_query, title_query, access_query, status_query)

        # 这里可以根据查询条件对数据进行过滤，然后更新表格视图的数据模型

    def GoToproblem_info(self, index):
        from contest_page import goTopage
        # 在此处处理行双击事件
        # print(self.model.item(index.row(), 0).text())
        name = self.model.item(index.row(), 0).text()
        global contest_url
        # print(contest_url[name])
        cid = contest_url[name].split("cid=")[1]
        params = {
            "act": "login",
            "cid": cid
        }
        goTopage(params, cid)

    def GoToContest_list(self):
        pass

    def GoToProblem_list(self):
        from problemlist import goToProblemlist
        params = {
            "a": "showProblemVolume",
            "vol": "1"
        }
        # app = QApplication(sys.argv)
        global window
        window.close()

        goToProblemlist(params)
        # sys.exit(app.exec_())

    def GoToGlobal_Rating(self):
        from problemlist_rating import goTopage
        params = {
            "m": "Ranklist",
            "a": "showRatingrank",
            "page_id": "1",
            "name": ""
        }
        global window
        window.close()
        goTopage(params)

    def GoToGlobal_status(self):
        from problemlist_status import goTostatus
        params = {
            "problem_id": "",
            "user_name": "",
            "judge_status": "0",
            "language": "0",
            "shared": "0",
            "status_vol": "1"
        }
        global window
        window.close()
        goTostatus(params)


def main(params):
    global window
    window = ContestApp()
    window.initUI(params)
    window.center()
    window.show()
    window.query_signal.connect(goTopage)


if __name__ == "__main__":
    app = QApplication(sys.argv)

    params = {
        "ctitle": "",
        "ctype": "",
        "cstate": "",
        "page_id": "1"
    }
    main(params)
    sys.exit(app.exec_())
