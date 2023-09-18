'''
author: yihang_01
Date: 2023-08-31 18:56:13
LastEditTime: 2023-09-16 11:28:33
Description: 爱自己最重要啦
QwQ 加油加油
'''
from global_var import session,current_directory
# from contest_page_test import session
from global_var import headers
# from contest_page_status import get_status_info
from lxml import etree
import requests
import os,encodings
import sys
from fake_useragent import UserAgent
from bs4 import BeautifulSoup
from PyQt5.QtWidgets import QApplication, QMainWindow, QTableView, QVBoxLayout, QWidget, QPushButton, QLabel, QLineEdit,QFormLayout,QHBoxLayout,QComboBox,QDesktopWidget,QAbstractItemView,QHeaderView
from PyQt5.QtGui import QStandardItemModel, QStandardItem
from PyQt5.uic import loadUi
from PyQt5.QtCore import Qt
from PyQt5 import QtCore
# from PyQt5.QtGui import QColor
from PyQt5 import QtGui
# from urllib.parse import urlparse, parse_qs, urlencode, urlunparse
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
sys.path.append(os.path.join(BASE_DIR, 'client'))
url = "http://acm.hrbust.edu.cn"

class ContestStatisticApp(QMainWindow):
    def __init__(self):
        super().__init__()
        # 设置窗口大小为全屏
        self.setWindowTitle("hrbustoj")
        self.resize(1280,800)
        self.setWindowTitle("HrBustOJ Contest Status")
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
    
    def initUI(self,cid):
        self.problem_button = QPushButton("Problems")
        self.status_button = QPushButton("Status")
        self.statistics_button = QPushButton("Statistics")
        self.ranklist_button = QPushButton("Ranklist")

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

        self.status_title = QLabel()

        # 创建一个QPalette对象
        palette = QtGui.QPalette()
        palette.setColor(QtGui.QPalette.WindowText, QtGui.QColor(26,92,200))
        # 应用QPalette到QLabel
        self.status_title.setPalette(palette)

        self.status_title.setAlignment(Qt.AlignCenter)
        self.status_title.setFont(QtGui.QFont("Roman times", 20, QtGui.QFont.Bold))

        # 创建表格视图和数据模型
        self.table_view = QTableView()
        self.model = QStandardItemModel()
        self.model.setColumnCount(15)
        self.model.setHorizontalHeaderLabels(["ProbID","AC","PE","TLE","MLE","WA","OLE","CE","RE","RF","SE","Total","GCC","G++","JAVA"])

        data=[]
        page = session.get(url + "/contests/index.php?act=statistics&cid=" + str(cid), headers=headers)
        # print(page.text)
        soup = BeautifulSoup(page.text, 'html.parser')
        title = soup.find("td",class_="ojtitle").text.strip()
        self.status_title.setText(title)
        # print(title)
        total_statistics = soup.find_all("tr", class_=["ojlist-row0","ojlist-row1"])

        for i in range(len(total_statistics)):
            tds = total_statistics[i].find_all("td")
            prob_id = tds[0].text.strip()
            ac = tds[1].text.strip()
            pe = tds[2].text.strip()
            tle = tds[3].text.strip()
            mle = tds[4].text.strip()
            wa = tds[5].text.strip()
            ole = tds[6].text.strip()
            ce = tds[7].text.strip()
            re = tds[8].text.strip()
            rf = tds[9].text.strip()
            se = tds[10].text.strip()
            total = tds[11].text.strip()
            gcc = tds[12].text.strip()
            gpp = tds[13].text.strip()
            java = tds[14].text.strip()
            data.append([prob_id,ac,pe,tle,mle,wa,ole,ce,re,rf,se,total,gcc,gpp,java])
        
        for row_data in data:
            row_items = [QStandardItem(item) for item in row_data]
            self.model.appendRow(row_items)
        self.table_view.setEditTriggers(QAbstractItemView.NoEditTriggers) # 只可读
        self.table_view.setModel(self.model)

        main_layout = QVBoxLayout()
        main_layout.addLayout(com_layout)
        main_layout.addWidget(self.status_title)
        main_layout.addWidget(self.table_view)

        container = QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)



        self.table_view.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)


    def GoToproblems(self,cid):
        from contest_page import goTopage
        global window
        window.close()
        params = {
            "act":"problems",
            "cid":cid
        }
        goTopage(params,cid)


    def GoTostatus(self,cid):
        from contest_page_status import goTopage
        global window
        window.close()
        goTopage(cid)

    def Gotostastics(self,cid):
        pass

    def Gotoranklist(self,cid):
        pass

def goTopage(cid):
    global window
    window = ContestStatisticApp()
    window.initUI(cid)
    window.center()
    window.show()

if __name__ == "__main__":
    app = QApplication(sys.argv)
    sys.exit(app.exec_())
