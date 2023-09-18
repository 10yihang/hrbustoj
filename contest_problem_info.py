'''
author: yihang_01
Date: 2023-08-31 18:56:13
LastEditTime: 2023-09-18 18:33:02
Description: 爱自己最重要啦
QwQ 加油加油
'''
from global_var import session,current_directory
# from contest_page_test import session
from global_var import headers
# from contest_page_status import get_status_info
from lxml import etree
import requests
import sys
from fake_useragent import UserAgent
from bs4 import BeautifulSoup
from PyQt5.QtWidgets import QApplication, QMainWindow, QTableView, QVBoxLayout, QWidget, QPushButton, QLabel, QLineEdit,QFormLayout,QHBoxLayout,QComboBox,QDesktopWidget,QAbstractItemView,QHeaderView,QTextBrowser,QSizePolicy, QScrollArea
from PyQt5.QtGui import QStandardItemModel, QStandardItem, QPalette, QColor, QFont
from PyQt5.uic import loadUi
from PyQt5.QtCore import Qt
from PyQt5 import QtCore
# from PyQt5.QtGui import QColor
from PyQt5 import QtGui
# from urllib.parse import urlparse, parse_qs, urlencode, urlunparse
# import markdown
import re
import os,encodings
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
sys.path.append(os.path.join(BASE_DIR, 'client'))

url = "http://acm.hrbust.edu.cn"

class ProblemInfoApp(QMainWindow):
    def __init__(self):
        super().__init__()
        # 设置窗口大小为全屏
        self.setWindowTitle("hrbustoj")
        self.resize(1500,900)
        self.setWindowTitle("HrBustOJ Contest Info")
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
    
    def initUI(self,params):
        self.problem_button = QPushButton("Problems")
        self.status_button = QPushButton("Status")
        self.statistics_button = QPushButton("Statistics")
        self.ranklist_button = QPushButton("Ranklist")
        # cid = params["cid"]
        cid = params.split("cid=")[1].split("&")[0]
        # print(cid)
        com_layout = QHBoxLayout()
        com_layout.addWidget(self.problem_button)
        self.problem_button.clicked.connect(lambda:self.GoToproblems(cid))
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

        page = session.get(url+"/contests/"+params,headers=headers)
        # print(page.text)
        soup = BeautifulSoup(page.text, 'html.parser')

        title = soup.find_all("td", class_="problem_mod_name")
        limit = soup.find_all("table", class_="problem_mod_info")
        title = title[0].text
        total = limit[1].find_all("td")
        total_submit = total[0].text
        total_ac = total[1].text
        special_judge = total[2].text
        limit = limit[0].find_all("td")
        limit = limit[0].text + "    " + limit[1].text
        total_submit = total_submit.strip().replace("									","")
        total_ac = total_ac.strip().replace("									","")
        special_judge = special_judge.strip()
        limit = limit.strip()
        # print(soup.find("td",class_="problem_mod_name").text)

        self.prob_title = QLabel(title)
        # 创建一个QPalette对象
        palette = QtGui.QPalette()
        palette.setColor(QtGui.QPalette.WindowText, QtGui.QColor(26,92,200))
        # 应用QPalette到QLabel
        self.prob_title.setPalette(palette)

        self.prob_title.setAlignment(Qt.AlignCenter)
        self.prob_title.setFont(QtGui.QFont("Roman times", 20, QtGui.QFont.Bold))

        self.limit = QLabel(limit)
        palette.setColor(QPalette.WindowText, QColor(0, 170, 107))
        self.limit.setPalette(palette)
        self.limit.setAlignment(Qt.AlignCenter)
        self.limit.setFont(QtGui.QFont("Roman times", 10, QtGui.QFont.Bold))

        self.total= QLabel(total_ac + " " + total_submit + " " + special_judge)
        self.total.setPalette(palette)
        self.total.setAlignment(Qt.AlignCenter)
        self.total.setFont(QtGui.QFont("Roman times", 10, QtGui.QFont.Bold))

        main_layout = QVBoxLayout()
        main_layout.addLayout(com_layout)
        main_layout.addWidget(self.prob_title)
        main_layout.addWidget(self.limit)
        main_layout.addWidget(self.total)

        description = soup.find_all("td", class_="problem_mod_title")
        content = soup.find_all("td", class_="problem_mod_content")

        palette.setColor(QPalette.WindowText, QColor(124, 169, 237))

        # 创建一个QScrollArea来包装QTextBrowser
        scroll_area = QScrollArea()
        scroll_area.setWidgetResizable(True)
        text_layout = QVBoxLayout()
        for i in range(len(description)):
            self.mod_title = QLabel(description[i].text)
            self.mod_title.setPalette(palette)
            self.mod_title.setFont(QtGui.QFont("Roman times", 10, QtGui.QFont.Bold))
            
            content_text = content[i].text.strip()
            content_text = re.sub(r'(?<=\n)\s+', '', content_text)
            # print(content_text)
            self.text = QTextBrowser()
            self.text.setFont(QtGui.QFont("Roman times"))

            # text=markdown.markdown(content_text)
            # self.text.setHtml(text)
            self.text.setPlainText(content_text)
            font = QFont("Arial", 12)
            self.text.setFont(font)
            self.text.document().adjustSize()
            self.text.setFixedHeight(int(self.text.document().size().height()))
            # slef.text.setFixedWidth(self.text.document().size().width())
            self.text.setVerticalScrollBarPolicy(Qt.ScrollBarAlwaysOff)
            text_layout.addWidget(self.mod_title)
            text_layout.addWidget(self.text)

        # 将QVBoxLayout设置为QScrollArea的小部件
        scroll_widget = QWidget()
        scroll_widget.setLayout(text_layout)
        scroll_area.setWidget(scroll_widget)


        # 将QScrollArea添加到主布局中
        main_layout.addWidget(scroll_area)

        self.submit_button = QPushButton("Submit")
        self.submit_button.clicked.connect(lambda:self.GoTosubmit(cid))
        self.submit_button.setFixedHeight(50)
        main_layout.addWidget(self.submit_button)

        container = QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)

    def GoTosubmit(self,cid):
        pass

    def GoToproblems(self,cid):
        from contest_page import goTopage
        global window
        window.close()
        params = {
            # "act":"problems",
            "cid":cid
        }
        goTopage(params,cid)


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

def goTopage(url):
    global window
    window = ProblemInfoApp()
    window.initUI(url)
    window.center()
    window.show()

if __name__ == "__main__":
    app = QApplication(sys.argv)
    sys.exit(app.exec_())
