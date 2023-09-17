'''
author: yihang_01
Date: 2023-08-28 22:39:44
LastEditTime: 2023-09-15 21:22:50
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

url = "http://acm.hrbust.edu.cn"

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

        com_layout = QHBoxLayout()
        com_layout.addWidget(self.problem_button)
        com_layout.addWidget(self.status_button)
        com_layout.addWidget(self.statistics_button)
        com_layout.addWidget(self.ranklist_button)


        self.prob_title = QLabel("计算机22-1、2班数据结构作业")
        self.start_time = QLabel("Start Time:2023-09-11 00:00:00")
        self.finish_time = QLabel("Finish Time:2023-09-16 00:00:00")

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

        data = []
        problem_url = []

        page = session.get(url + "/contests/index.php", headers=headers, params=params)
        # print(page.text)
        soup = BeautifulSoup(page.text, "html.parser")
        ojtitle = soup.find_all("td",class_="ojtitle")[0].text
        print(ojtitle)
        total_problem = soup.find_all("tr", class_=["problemset-row0","problemset-row1"])



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

def goTopage(params):
    global window
    window = ContestInfoApp()
    window.initUI(params)
    window.center()
    window.show()

if __name__ == "__main__":
    app = QApplication(sys.argv)
    params = {
        "act":"problems",
        "cid":"2241"
    }
    goTopage(params)
    sys.exit(app.exec_())
