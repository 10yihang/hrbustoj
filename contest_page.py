'''
author: yihang_01
Date: 2023-08-28 22:39:44
LastEditTime: 2023-09-17 00:59:05
Description: 爱自己最重要啦
QwQ 加油加油
'''
import sys
import requests
from bs4 import BeautifulSoup
from global_var import session, headers
from PyQt5.QtWidgets import QApplication, QMainWindow, QTableView, QVBoxLayout, QWidget, QPushButton, QLabel, QLineEdit,QFormLayout,QHBoxLayout,QComboBox,QDesktopWidget,QAbstractItemView,QHeaderView
from PyQt5.QtGui import QStandardItemModel, QStandardItem, QPalette, QColor
from PyQt5.uic import loadUi
from PyQt5.QtCore import Qt
from PyQt5 import QtCore
# from PyQt5.QtGui import QColor
from PyQt5 import QtGui
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_v1_5
import json
import base64
from global_var import contest_password,contest_username,current_directory

url = "http://acm.hrbust.edu.cn"

login_rsa_public_key = """-----BEGIN PUBLIC KEY-----
MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC88fBRU1FaC5S537krMDVDapOZk44Nw+Yud69IPZYwk9HT0n6D7Pvp3mXp+Par6gp5HUW3tFs7/l3cTIqryEXMfJXRF7FlneM64kLs/KZ2i0larVrz7QgcTb5oAuHeIE24Uc0ja+S83Hlc2Dk6z1TWkAjG2f/p15xRfv/IO5yyywIDAQAB
-----END PUBLIC KEY-----"""

# 加载RSA公钥
public_key = RSA.import_key(login_rsa_public_key)
# print(public_key.text)
# 使用公钥加密用户名和密码
cipher = PKCS1_v1_5.new(public_key)
# print(cipher)
data = json.dumps({"username": contest_username, "password": contest_password}).encode('utf-8')
# print(data)
encrypted = cipher.encrypt(data)

# 将加密后的结果转换为base64编码的字符串
encoded = base64.b64encode(encrypted).decode('ascii')

class Problems:
    def __init__(self):
        self.solve = ""
        self.url = ""
        self.time = ""
        self.r = ""
        self.ur = ""
        self.title = ""
        self.ID = ""

class ContestInfoApp(QMainWindow):
    query_signal = QtCore.pyqtSignal(str, str, str, str)
    def __init__(self):
        super().__init__()
        # 设置窗口大小为全屏
        self.setWindowTitle("hrbustoj")
        self.resize(1280,800)
        self.setWindowTitle("HrBustOJ Contest")
        self.setWindowIcon(QtGui.QIcon(current_directory+"\img\\003.jpg"))

        # 创建一个数据模型..
    
    def center(self):  # 定义一个函数使得窗口居中显示
        # 获取屏幕坐标系
        screen = QDesktopWidget().screenGeometry()
        # 获取窗口坐标系
        size = self.geometry()
        newLeft = (screen.width() - size.width()) / 2
        newTop = (screen.height() - size.height()) / 2
        self.move(int(newLeft),int(newTop))
    
    def initUI(self,params,cid):
        self.problem_button = QPushButton("Problems")
        self.status_button = QPushButton("Status")
        self.statistics_button = QPushButton("Statistics")
        self.ranklist_button = QPushButton("Ranklist")

        com_layout = QHBoxLayout()
        com_layout.addWidget(self.problem_button)
        self.problem_button.clicked.connect(lambda:self.GoToproblemslist(cid))
        com_layout.addWidget(self.status_button)
        self.status_button.clicked.connect(lambda:self.GoTostatus(cid))
        com_layout.addWidget(self.statistics_button)
        self.statistics_button.clicked.connect(lambda:self.Gotostastics(cid))
        com_layout.addWidget(self.ranklist_button)
        self.ranklist_button.clicked.connect(lambda:self.Gotoranklist(cid))

        self.problem_button.setFixedHeight(50)
        self.status_button.setFixedHeight(50)
        self.statistics_button.setFixedHeight(50)
        self.ranklist_button.setFixedHeight(50)

        self.prob_title = QLabel()
        self.start_time = QLabel()
        self.finish_time = QLabel()

        # 创建一个QPalette对象
        palette = QPalette()

        # 设置文本颜色为红色
        palette.setColor(QPalette.WindowText, QColor(26, 92, 200))

        # 应用QPalette到QLabel
        self.prob_title.setPalette(palette)

        palette.setColor(QPalette.WindowText, QColor(0, 170, 107))
        self.start_time.setPalette(palette)
        self.finish_time.setPalette(palette)


        self.prob_title.setAlignment(Qt.AlignCenter)
        self.prob_title.setFont(QtGui.QFont("Roman times", 20, QtGui.QFont.Bold))
        self.start_time.setAlignment(Qt.AlignCenter)
        self.start_time.setFont(QtGui.QFont("Roman times", 10, QtGui.QFont.Bold))
        self.finish_time.setAlignment(Qt.AlignCenter)
        self.finish_time.setFont(QtGui.QFont("Roman times", 10, QtGui.QFont.Bold))

        self.table_view = QTableView()
        self.model = QStandardItemModel()
        self.model.setColumnCount(5)
        self.model.setHorizontalHeaderLabels(["Solved", "ID", "Title", "R(A/s)","UR(UA/US)"])
        global problem_url
        data = []
        problem_url = []
        _data = {
            'username': contest_username,
            'password': "",
            'encrypt': encoded,
            'jump_url': "",
            'cid' : cid
        }
        page = session.post(url + "/contests/index.php", headers=headers, params=params, data=_data)
        # print(page.text)
        # print(_data)
        soup = BeautifulSoup(page.text, "html.parser")
        ojtitle = soup.find_all("td",class_="ojtitle")[0].text
        # print(ojtitle)
        self.prob_title.setText(ojtitle)
        time = soup.find_all("td",class_="contest_time_info")
        self.start_time.setText(time[0].text)
        self.finish_time.setText(time[1].text)
        total_problem = soup.find_all("tr", class_=['problemset-row0', 'problemset-row1'])
        # print(total_problem)
        for i in range(len(total_problem)):
            tds = total_problem[i].find_all("td")
            # print(tds)
            if tds[0].find("img"):
                solved = tds[0].find("img").get('src')
                if solved == "images/ac.gif":   solved = "√"
                elif solved == "images/unac.gif": solved = "x"
                else: solved=""
            else: solved = ""

            id = tds[1].text
            title = tds[2].text
            problem_url.append(tds[2].find('a').get('href'))
            r = tds[3].text
            ur = tds[4].text
            # print(solved,id,title,r,ur)
            data.append([solved, id, title, r, ur])
        # print(data)
        # print(problem_url)
        
        for row_data in data:
            row_items = [QStandardItem(item) for item in row_data]
            self.model.appendRow(row_items)
        self.table_view.setEditTriggers(QAbstractItemView.NoEditTriggers) # 只可读
        self.table_view.setModel(self.model)
            

        main_layout = QVBoxLayout()
        main_layout.addLayout(com_layout)
        main_layout.addWidget(self.prob_title)
        main_layout.addWidget(self.start_time)
        main_layout.addWidget(self.finish_time)
        main_layout.addWidget(self.table_view)

        container = QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)
        # print(1)

        self.table_view.horizontalHeader().setSectionResizeMode(0, QHeaderView.ResizeToContents) #自适应
        self.table_view.horizontalHeader().setSectionResizeMode(1, QHeaderView.ResizeToContents) #自适应


        # 设置其他列占满剩余空间
        for column in [2,3,4]:
            self.table_view.horizontalHeader().setSectionResizeMode(column, QHeaderView.Stretch)
        
        self.table_view.doubleClicked.connect(self.GoToproblem)

    def GoToproblem(self,index):
        from contest_problem_info import goTopage
        # print(index.row())
        global problem_url
        # print(problem_url[index.row()])
        goTopage(problem_url[index.row()])

    def GoToproblemslist(self,cid):
        pass

    def GoTostatus(self,cid):
        from contest_page_status import goTopage
        global window
        window.close()
        goTopage(cid)


    def Gotostastics(self,cid):
        from contest_page_statistics import goTopage
        global window
        window.close()
        goTopage(cid)

    def Gotoranklist(self,cid):
        pass

def goTopage(params,cid):
    global window
    window = ContestInfoApp()
    window.initUI(params,cid)
    window.center()
    window.show()

if __name__ == "__main__":
    app = QApplication(sys.argv)
    params = {
        "act":"login",
        "cid":"2085"
    }
    goTopage(params,"2085")
    sys.exit(app.exec_())
