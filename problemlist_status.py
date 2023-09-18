"""
author: yihang_01
Date: 2023-08-31 18:56:13
LastEditTime: 2023-09-02 19:14:13
Description: 爱自己最重要啦
QwQ 加油加油
"""
import sys

from PyQt5 import QtCore
from PyQt5 import QtGui
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QStandardItemModel, QStandardItem, QKeySequence
from PyQt5.QtWidgets import QApplication, QMainWindow, QTableView, QVBoxLayout, QWidget, QPushButton, QLabel, QLineEdit, \
    QHBoxLayout, QComboBox, QDesktopWidget, QAbstractItemView, QHeaderView, QShortcut
# from contest_page_status import get_status_info
from bs4 import BeautifulSoup

# from contest_page_test import session
from global_var import headers
from global_var import session, current_directory

# from urllib.parse import urlparse, parse_qs, urlencode, urlunparse

url = "http://acm.hrbust.edu.cn"


def perform_query():
    # 获取输入框和单选按钮的值
    global probid_entry, username_entry, judgestatus_var, lang_var, window
    probid_value = probid_entry.get()
    username_value = username_entry.get()
    judgestatus_value = judgestatus_var.get()
    lang_value = lang_var.get()
    window.destroy()
    params = {
        "problem_id": probid_value,
        "user_name": username_value,
        "language": lang_value,
        "judge_status": judgestatus_value,
    }
    get_status_info(url + "/index.php?m=Status&a=showStatus&status_vol=1", params)
    # 执行查询操作，你可以在这里编写你的查询逻辑
    # 示例：打印获取的值
    # print("ProbID:", probid_value)
    # print("Username:", username_value)
    # print("Judgestatus:", judgestatus_value)
    # print("Lang:", lang_value)


def goTopage(page_id, prob_id, user_name, judge_status, lang):
    if page_id == '': page_id = "1"
    params = {
        "status_vol": page_id,
        "problem_id": prob_id,
        "user_name": user_name,
        "judge_status": judge_status,
        "language": lang
    }
    # print(params)
    global window
    window.close()
    goTostatus(params)


class ProblemSetApp(QMainWindow):
    query_signal = QtCore.pyqtSignal(str, str, str, str, str)

    def __init__(self):
        super().__init__()
        # 设置窗口大小为全屏
        self.resize(1280, 800)
        self.setWindowTitle("HrBustOJ Status")
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
        self.refreshShortcut = QShortcut(QKeySequence('F5'), self)  # 创建捕获F5键的快捷键
        self.refreshShortcut.activated.connect(self.refreshPage)  # 连接到刷新函数
        self.pageid_label = QLabel("page")
        self.pageid_edit = QLineEdit()
        self.probId_label = QLabel("ProbID")
        self.probid_edit = QLineEdit()
        self.username_label = QLabel("Username")
        self.username_edit = QLineEdit()
        self.judgestatus_label = QLabel("Judgestatus")
        self.judgestatus_combox = QComboBox()
        self.judgestatus_combox.addItem("All")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "0", role=Qt.UserRole)  # 设置关联值
        self.judgestatus_combox.addItem("Accepted")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "2", role=Qt.UserRole)
        self.judgestatus_combox.addItem("Presentation Error")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "3", role=Qt.UserRole)
        self.judgestatus_combox.addItem("Wrong Answer")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "4", role=Qt.UserRole)
        self.judgestatus_combox.addItem("Runtime Error")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "10", role=Qt.UserRole)
        self.judgestatus_combox.addItem("Time Limit Exceeded")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "7", role=Qt.UserRole)
        self.judgestatus_combox.addItem("Memory Limit Exceeded")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "6", role=Qt.UserRole)
        self.judgestatus_combox.addItem("Output Limit Exceeded")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "5", role=Qt.UserRole)
        self.judgestatus_combox.addItem("Compile Error")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "8", role=Qt.UserRole)
        self.judgestatus_combox.addItem("System Error")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "1", role=Qt.UserRole)
        self.judgestatus_combox.addItem("Restricted Function")
        self.judgestatus_combox.setItemData(self.judgestatus_combox.count() - 1, "9", role=Qt.UserRole)
        self.judgestatus_combox.setCurrentIndex(0)

        self.lang_label = QLabel("Lang")
        self.lang_combox = QComboBox()
        self.lang_combox.addItem("All")
        self.lang_combox.setItemData(self.lang_combox.count() - 1, "0", role=Qt.UserRole)
        self.lang_combox.addItem("C")
        self.lang_combox.setItemData(self.lang_combox.count() - 1, "1", role=Qt.UserRole)
        self.lang_combox.addItem("C++")
        self.lang_combox.setItemData(self.lang_combox.count() - 1, "2", role=Qt.UserRole)
        self.lang_combox.addItem("Java")
        self.lang_combox.setItemData(self.lang_combox.count() - 1, "3", role=Qt.UserRole)
        self.lang_combox.addItem("Python")
        self.lang_combox.setItemData(self.lang_combox.count() - 1, "6", role=Qt.UserRole)
        self.lang_combox.addItem("PHP")
        self.lang_combox.setItemData(self.lang_combox.count() - 1, "4", role=Qt.UserRole)
        self.lang_combox.addItem("Haskell")
        self.lang_combox.setItemData(self.lang_combox.count() - 1, "7", role=Qt.UserRole)
        self.lang_combox.setCurrentIndex(0)

        self.query_button = QPushButton("Go")
        self.query_button.clicked.connect(self.perform_query)

        self.contest_button = QPushButton("Contest")
        self.contest_button.clicked.connect(self.GoToContest_list)
        self.problem_button = QPushButton("Problem")
        self.problem_button.clicked.connect(self.GoToProblem_list)
        self.rating_button = QPushButton("Rating")
        self.rating_button.clicked.connect(self.GoToGlobal_rating)
        self.status_button = QPushButton("Status")

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
        que_layout.addWidget(self.pageid_label)
        que_layout.addWidget(self.pageid_edit)
        que_layout.addWidget(self.probId_label)
        que_layout.addWidget(self.probid_edit)
        que_layout.addWidget(self.username_label)
        que_layout.addWidget(self.username_edit)
        que_layout.addWidget(self.judgestatus_label)
        que_layout.addWidget(self.judgestatus_combox)
        que_layout.addWidget(self.lang_label)
        que_layout.addWidget(self.lang_combox)
        que_layout.addWidget(self.query_button)

        self.table_view = QTableView()
        self.model = QStandardItemModel()
        self.model.setColumnCount(9)
        self.model.setHorizontalHeaderLabels(
            ["RunID", "ProbID", "JudgeStatus", "Lang", "Time", "Memory", "Autoor", "Length", "Submit Time"])

        data = []

        page = session.post(url + "/index.php?m=Status&a=showStatus", headers=headers, params=params)
        # print(page.text)
        soup = BeautifulSoup(page.text, 'html.parser')
        total_status = soup.find_all("tr", class_=["ojlist-row0", "ojlist-row1"])

        for i in range(len(total_status)):
            tds = total_status[i].find_all("td")
            run_id = tds[1].text
            # probid = tds[2].text
            problem_id = tds[2].text
            judgestatus = tds[3].text.replace("\n", "").replace("\t", "")
            language = tds[4].text
            time = tds[5].text
            memory = tds[6].text
            author = tds[7].text
            code_length = tds[8].text
            submit_time = tds[9].text
            language = language.replace("\n", "").strip()
            submit_time = submit_time.replace("\n", "").strip()
            time = time.strip()
            memory = memory.strip()
            code_length = code_length.strip()
            author = author.strip()
            data.append([run_id, problem_id, judgestatus, language, time, memory, author, code_length, submit_time])

        for row_data in data:
            row_items = [QStandardItem(item) for item in row_data]
            self.model.appendRow(row_items)
        self.table_view.setEditTriggers(QAbstractItemView.NoEditTriggers)  # 只可读

        for row_index in range(self.model.rowCount()):
            state_item = self.model.item(row_index, 2)  # 第3列（State）
            if state_item is not None:
                state_text = state_item.text()
                if state_text == "Accepted":
                    state_item.setForeground(QtGui.QColor(Qt.green))
                elif state_text == "Compile Error":
                    state_item.setForeground(QtGui.QColor(Qt.blue))
                else:
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

        self.table_view.horizontalHeader().setSectionResizeMode(1, QHeaderView.ResizeToContents)  # 自适应
        self.table_view.horizontalHeader().setSectionResizeMode(5, QHeaderView.ResizeToContents)
        self.table_view.horizontalHeader().setSectionResizeMode(2, QHeaderView.ResizeToContents)
        self.table_view.horizontalHeader().setSectionResizeMode(8, QHeaderView.ResizeToContents)

        # 设置其他列占满剩余空间
        for column in [0, 4, 3, 6, 7]:
            self.table_view.horizontalHeader().setSectionResizeMode(column, QHeaderView.Stretch)

    def refreshPage(self):
        # 在这里执行页面刷新操作
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

    def perform_query(self):
        # 在此处执行查询操作，根据文本框中的内容过滤数据
        page_id = self.pageid_edit.text()
        prob_id = self.probid_edit.text()
        user_name = self.username_edit.text()
        judge_status = self.judgestatus_combox.currentData(role=Qt.UserRole)
        lang = self.lang_combox.currentData(role=Qt.UserRole)
        self.query_signal.emit(page_id, prob_id, user_name, judge_status, lang)

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


def goTostatus(params):
    # from hrbustoj import app
    global window
    window = ProblemSetApp()
    window.initUI(params)
    window.center()
    window.show()
    window.query_signal.connect(goTopage)
    # sys.exit(app.exec_())


if __name__ == '__main__':
    params = {
        "problem_id": "",
        "user_name": "",
        "judge_status": "0",
        "language": "0",
        "shared": "0",
        "status_vol": "1"
    }
    app = QApplication(sys.argv)
    # session.post(url + "/index.php?m=ProblemSet&a=showProblemVolume&vol=" + "cid",data=data,headers=headers,params=params)
    goTostatus(params)
    sys.exit(app.exec_())
