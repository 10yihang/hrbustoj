"""
author: yihang_01
Date: 2023-08-31 18:56:13
LastEditTime: 2023-09-16 11:23:15
Description: 爱自己最重要啦
QwQ 加油加油
"""
# from contest_page_status import get_status_info
import sys

# from PyQt5.QtGui import QColor
from PyQt5 import QtGui
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QStandardItemModel, QStandardItem
from PyQt5.QtWidgets import QApplication, QMainWindow, QTableView, QVBoxLayout, QWidget, QPushButton, QLabel, \
    QHBoxLayout, QDesktopWidget, QAbstractItemView, QHeaderView
from bs4 import BeautifulSoup

# from contest_page_test import session
from global_var import headers
from global_var import session, current_directory

# from urllib.parse import urlparse, parse_qs, urlencode, urlunparse

url = "http://acm.hrbust.edu.cn"


class ContestStatusApp(QMainWindow):
    def __init__(self):
        super().__init__()
        # 设置窗口大小为全屏
        self.setWindowTitle("hrbustoj")
        self.resize(1280, 800)
        self.setWindowTitle("HrBustOJ Contest Status")
        self.setWindowIcon(QtGui.QIcon(current_directory + "\img\\003.jpg"))

        # 创建一个数据模型..

    def center(self):  # 定义一个函数使得窗口居中显示
        # 获取屏幕坐标系
        screen = QDesktopWidget().screenGeometry()
        # 获取窗口坐标系
        size = self.geometry()
        newLeft = (screen.width() - size.width()) / 2
        newTop = (screen.height() - size.height()) / 2
        self.move(int(newLeft), int(newTop))

    def initUI(self, cid):
        self.problem_button = QPushButton("Problems")
        self.status_button = QPushButton("Status")
        self.statistics_button = QPushButton("Statistics")
        self.ranklist_button = QPushButton("Ranklist")

        com_layout = QHBoxLayout()
        com_layout.addWidget(self.problem_button)
        self.problem_button.clicked.connect(lambda: self.GoToproblems(cid))
        com_layout.addWidget(self.status_button)
        self.status_button.clicked.connect(lambda: self.GoTostatus(cid))
        com_layout.addWidget(self.statistics_button)
        self.statistics_button.clicked.connect(lambda: self.Gotostastics(cid))
        com_layout.addWidget(self.ranklist_button)
        self.ranklist_button.clicked.connect(lambda: self.Gotoranklist(cid))

        self.status_title = QLabel()

        self.problem_button.setFixedHeight(50)
        self.status_button.setFixedHeight(50)
        self.statistics_button.setFixedHeight(50)
        self.ranklist_button.setFixedHeight(50)

        # 创建一个QPalette对象
        palette = QtGui.QPalette()
        palette.setColor(QtGui.QPalette.WindowText, QtGui.QColor(26, 92, 200))
        # 应用QPalette到QLabel
        self.status_title.setPalette(palette)

        self.status_title.setAlignment(Qt.AlignCenter)
        self.status_title.setFont(QtGui.QFont("Roman times", 20, QtGui.QFont.Bold))

        # 创建表格视图和数据模型
        self.table_view = QTableView()
        self.model = QStandardItemModel()
        self.model.setColumnCount(8)
        self.model.setHorizontalHeaderLabels(
            ["RunID", "ID", "JudgeStatus", "Language", "Time", "Memory", "Length", "SubmitTime"])

        data = []
        page = session.get(url + "/contests/index.php?act=status&cid=" + str(cid), headers=headers)
        # print(page.text)
        soup = BeautifulSoup(page.text, 'html.parser')
        title = soup.find("td", class_="ojtitle").text.strip()
        self.status_title.setText(title)
        # print(title)
        total_status = soup.find_all("tr", class_=["ojlist-row0", "ojlist-row1"])

        for i in range(len(total_status)):
            tds = total_status[i].find_all("td")
            run_id = tds[0].text
            problem_id = tds[1].text
            judgestatus = tds[2].text.replace("\n", "").replace("\t", "")
            language = tds[3].text
            time = tds[4].text
            memory = tds[5].text
            code_length = tds[6].text
            submit_time = tds[7].text
            language = language.replace("\n", "").strip()
            submit_time = submit_time.replace("\n", "").strip()
            data.append([run_id, problem_id, judgestatus, language, time, memory, code_length, submit_time])
        for row_data in data:
            row_items = [QStandardItem(item) for item in row_data]
            self.model.appendRow(row_items)
        self.table_view.setEditTriggers(QAbstractItemView.NoEditTriggers)  # 只可读
        self.table_view.setModel(self.model)

        main_layout = QVBoxLayout()
        main_layout.addLayout(com_layout)
        main_layout.addWidget(self.status_title)
        main_layout.addWidget(self.table_view)

        container = QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)

        for row_index in range(self.model.rowCount()):
            state_item = self.model.item(row_index, 2)  # 第3列（State）
            _id = self.model.item(row_index, 1)  # 第2列（ID）
            _id.setForeground(QtGui.QColor(0, 94, 172))
            if state_item is not None:
                state_text = state_item.text()
                if state_text == "Accepted":
                    state_item.setForeground(QtGui.QColor(0, 175, 66))
                elif state_text == "Compile Error":
                    state_item.setForeground(QtGui.QColor(Qt.blue))
                else:
                    state_item.setForeground(QtGui.QColor(255, 0, 0))

        self.table_view.horizontalHeader().setSectionResizeMode(1, QHeaderView.ResizeToContents)  # 自适应
        self.table_view.horizontalHeader().setSectionResizeMode(7, QHeaderView.ResizeToContents)
        self.table_view.horizontalHeader().setSectionResizeMode(3, QHeaderView.ResizeToContents)
        self.table_view.horizontalHeader().setSectionResizeMode(4, QHeaderView.ResizeToContents)

        # 设置其他列占满剩余空间
        for column in [0, 2, 5, 6]:
            self.table_view.horizontalHeader().setSectionResizeMode(column, QHeaderView.Stretch)

    def GoToproblems(self, cid):
        from contest_page import goTopage
        global window
        window.close()
        params = {
            "act": "problems",
            "cid": cid
        }
        goTopage(params, cid)

    def GoTostatus(self, cid):
        pass

    def Gotostastics(self, cid):
        from contest_page_statistics import goTopage
        global window
        window.close()
        goTopage(cid)

    def Gotoranklist(self, cid):
        pass


def goTopage(cid):
    global window
    window = ContestStatusApp()
    window.initUI(cid)
    window.center()
    window.show()


if __name__ == "__main__":
    app = QApplication(sys.argv)
    sys.exit(app.exec_())
