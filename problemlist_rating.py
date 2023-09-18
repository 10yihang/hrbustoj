"""
author: yihang_01
Date: 2023-08-31 18:56:13
LastEditTime: 2023-09-17 19:16:59
Description: 爱自己最重要啦
QwQ 加油加油
"""
import sys

from PyQt5 import QtCore
from PyQt5 import QtGui
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QStandardItemModel, QStandardItem
from PyQt5.QtWidgets import QApplication, QMainWindow, QTableView, QVBoxLayout, QWidget, QPushButton, QLabel, QLineEdit, \
    QHBoxLayout, QDesktopWidget, QHeaderView
# from contest_page_status import get_status_info
from bs4 import BeautifulSoup

# from contest_page_test import session
from global_var import headers
from global_var import session, current_directory

# from urllib.parse import urlparse, parse_qs, urlencode, urlunparse

url = "http://acm.hrbust.edu.cn"


def goTo(user, page):
    if page == '': page = "1"
    params = {
        "m": "Ranklist",
        "a": "showRatingrank",
        "page_id": page,
        "name": user
    }
    # print(params)
    global window
    window.close()
    goTopage(params)


class RatingApp(QMainWindow):
    query_signal = QtCore.pyqtSignal(str, str)

    def __init__(self):
        super().__init__()
        # 设置窗口大小为全屏
        self.resize(1280, 800)
        self.setWindowTitle("HrBustOJ Rating")
        self.setWindowIcon(QtGui.QIcon(current_directory + "\img\\003.jpg"))

    def center(self):  # 定义一个函数使得窗口居中显示
        # 获取屏幕坐标系
        screen = QDesktopWidget().screenGeometry()
        # 获取窗口坐标系
        size = self.geometry()
        newLeft = (screen.width() - size.width()) / 2
        newTop = (screen.height() - size.height()) / 2
        self.move(int(newLeft), int(newTop))

    def initUI(self, params):
        self.user_label = QLabel("UserSearch")
        self.user_edit = QLineEdit()
        self.page_label = QLabel("Page")
        self.page_edit = QLineEdit()

        self.query_button = QPushButton("Go")
        self.query_button.clicked.connect(self.perform_query)

        self.contest_button = QPushButton("Contest")
        self.contest_button.clicked.connect(self.GoToContest_list)
        self.problem_button = QPushButton("Problem")
        self.problem_button.clicked.connect(self.GoToProblem_list)
        self.rating_button = QPushButton("Rating")
        # self.rating_button.clicked.connect(self.GoToGlobal_rating)
        self.status_button = QPushButton("Status")
        self.status_button.clicked.connect(self.GoToGlobal_status)

        self.contest_button.setFixedHeight(50)
        self.problem_button.setFixedHeight(50)
        self.rating_button.setFixedHeight(50)
        self.status_button.setFixedHeight(50)

        com_layout = QHBoxLayout()
        com_layout.addWidget(self.contest_button)
        com_layout.addWidget(self.problem_button)
        com_layout.addWidget(self.rating_button)
        com_layout.addWidget(self.status_button)

        que_layout = QHBoxLayout()
        que_layout.addWidget(self.user_label)
        que_layout.addWidget(self.user_edit)
        que_layout.addWidget(self.page_label)
        que_layout.addWidget(self.page_edit)
        que_layout.addWidget(self.query_button)

        self.table_view = QTableView()
        self.model = QStandardItemModel()
        self.model.setColumnCount(7)
        self.model.setHorizontalHeaderLabels(["Rank", "User", "Motto", "Rating", "Solved", "Submit", "AC Ratio"])

        data = []

        page = session.get(url + "/index.php", headers=headers, params=params)
        # print(page.text)
        soup = BeautifulSoup(page.text, "lxml")
        self.title = QLabel("Rating")

        total_user = soup.find_all("tr", class_=["ojlist-row0", "ojlist-row1"])
        for i in range(len(total_user)):
            tds = total_user[i].find_all("td")
            rank = tds[0].text
            user = tds[1].text
            motto = tds[2].text
            rating = tds[3].text
            solved = tds[4].text
            submit = tds[5].text
            acratio = tds[6].text
            data.append([rank, user, motto, rating, solved, submit, acratio])

        for row_data in data:
            row_items = [QStandardItem(item) for item in row_data]
            self.model.appendRow(row_items)
        # self.table_view.setEditTriggers(QAbstractItemView.NoEditTriggers) # 只可读

        for row_index in range(self.model.rowCount()):
            state_item = self.model.item(row_index, 1)  # 第2列（State）
            state_item.setForeground(QtGui.QColor(Qt.red))

        self.table_view.setModel(self.model)

        main_layout = QVBoxLayout()
        main_layout.addLayout(com_layout)
        main_layout.addLayout(que_layout)
        main_layout.addWidget(self.table_view)

        # print(2)
        # 创建一个QWidget作为窗口的中心部件，设置主布局管理器
        container = QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)

        self.table_view.horizontalHeader().setSectionResizeMode(0, QHeaderView.ResizeToContents)
        self.table_view.horizontalHeader().setSectionResizeMode(6, QHeaderView.ResizeToContents)
        self.table_view.horizontalHeader().setSectionResizeMode(5, QHeaderView.ResizeToContents)
        self.table_view.horizontalHeader().setSectionResizeMode(3, QHeaderView.ResizeToContents)
        self.table_view.horizontalHeader().setSectionResizeMode(4, QHeaderView.ResizeToContents)

        # 设置其他列占满剩余空间
        for column in [1, 2]:
            self.table_view.horizontalHeader().setSectionResizeMode(column, QHeaderView.Stretch)

    def perform_query(self):
        # 在此处执行查询操作，根据文本框中的内容过滤数据
        user = self.user_edit.text()
        page = self.page_edit.text()
        self.query_signal.emit(user, page)

    def GoToContest_list(self):
        from hrbustoj import main
        global window
        window.close()
        params = {
            "ctitle": "",
            "ctype": "",
            "cstate": "",
            "page_id": "1"
        }
        main(params)

    def GoToRating(self):
        pass

    def GoToProblem_list(self):
        from problemlist import goToProblemlist
        # print(1)
        params = {
            "a": "showProblemVolume",
            "vol": "1"
        }
        # app = QApplication(sys.argv)
        global window
        window.close()

        goToProblemlist(params)
        # sys.exit(app.exec_())

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


def goTopage(params):
    # from hrbustoj import app
    global window
    window = RatingApp()
    window.initUI(params)
    window.center()
    window.show()
    window.query_signal.connect(goTo)
    # sys.exit(app.exec_())


if __name__ == '__main__':
    params = {
        "m": "Ranklist",
        "a": "showRatingrank",
        "page_id": "1",
        "name": ""
    }
    app = QApplication(sys.argv)
    # session.post(url + "/index.php?m=ProblemSet&a=showProblemVolume&vol=" + "cid",data=data,headers=headers,params=params)
    goTopage(params)
    sys.exit(app.exec_())
