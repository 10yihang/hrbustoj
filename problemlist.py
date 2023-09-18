import sys
import os
import requests
from bs4 import BeautifulSoup
from PyQt5.QtWidgets import QApplication, QMainWindow, QTableView, QVBoxLayout, QWidget, QPushButton, QLabel, QLineEdit, QFormLayout, QHBoxLayout, QComboBox, QDesktopWidget, QAbstractItemView, QTreeView, QTreeWidgetItem, QTextEdit, QScrollBar,QHeaderView
from PyQt5.QtGui import QStandardItemModel, QStandardItem
from PyQt5.QtCore import Qt, pyqtSlot
from PyQt5 import QtCore
from PyQt5 import QtGui
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_v1_5
import json
import base64
from global_var import session,headers,current_directory
import os,encodings
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
sys.path.append(os.path.join(BASE_DIR, 'client'))
url = "http://acm.hrbust.edu.cn"

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
sys.path.append(os.path.join(BASE_DIR, 'client'))



def goTopage(page_id,search_text,search_com):
    if page_id:
        params={
            "a":"showProblemVolume",
            "vol":page_id,
        }
    else:
        params={
            "a":"searchProblem",
            "jumpUrl":"",
            "conditions":search_text,
            "search":search_com,
        }
    global window
    # print(params)
    window.close()
    window.initUI(params)
    window.center()
    window.show()
    # window.query_signal.connect(goTopage)
    # print(params)

    # goToProblemlist(params)

class ProblemSetApp(QMainWindow):
    query_signal = QtCore.pyqtSignal(str, str, str)
    def __init__(self):
        super().__init__()
        # 设置窗口大小为全屏
        self.resize(1280,800)
        self.setWindowTitle("HrBustOJ Problemset")
        self.setWindowIcon(QtGui.QIcon(current_directory+"\img\\003.jpg"))


    def center(self):  # 定义一个函数使得窗口居中显示
        # 获取屏幕坐标系
        screen = QDesktopWidget().screenGeometry()
        # 获取窗口坐标系
        size = self.geometry()
        newLeft = (screen.width() - size.width()) / 2
        newTop = (screen.height() - size.height()) / 2
        self.move(int(newLeft),int(newTop))

    def initUI(self,params):
        self.volume = QLabel("Volume")
        self.volune_edit = QLineEdit()
        self.volune_edit.returnPressed.connect(self.onEnterPressed)
        self.search = QLabel("Search")
        self.search_edit = QLineEdit()
        self.search_edit.returnPressed.connect(self.onEnterPressed)
        self.search_combox = QComboBox()
        self.query_button = QPushButton("Go")
        self.query_button.clicked.connect(self.perform_query)
        self.search_combox.addItem("ID")
        self.search_combox.setItemData(self.search_combox.count() - 1, "1", role=Qt.UserRole)  # 设置关联值
        self.search_combox.addItem("Title")
        self.search_combox.setItemData(self.search_combox.count() - 1, "0", role=Qt.UserRole)  
        self.search_combox.addItem("Author")
        self.search_combox.setItemData(self.search_combox.count() - 1, "2", role=Qt.UserRole)  
        self.search_combox.addItem("Source")
        self.search_combox.setItemData(self.search_combox.count() - 1, "3", role=Qt.UserRole)  
        self.search_combox.setCurrentIndex(0)  # 设置默认选项
        


        self.contest_button = QPushButton("Contest")
        self.contest_button.clicked.connect(self.GoToContest_list)
        self.problem_button = QPushButton("Problem")
        self.rating_button = QPushButton("Rating")
        # self.rating_button.clicked.connect(self.GoToGlobal_Rating)
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
        que_layout.addWidget(self.volume)
        que_layout.addWidget(self.volune_edit)
        que_layout.addWidget(self.search)
        que_layout.addWidget(self.search_edit)
        que_layout.addWidget(self.search_combox)
        que_layout.addWidget(self.query_button)

        self.table_view = QTableView()
        self.model = QStandardItemModel()
        self.model.setColumnCount(6)
        self.model.setHorizontalHeaderLabels(["Solved", "ProblemID", "Title", "Rating", "R(A/S)", "UR(A/S)"])

        global problem_url

        data = []
        problem_url = []


        # 获取题目列表
        page = session.get(url + "/index.php?m=ProblemSet" , headers=headers, params = params)
        # print(page.text)
        soup = BeautifulSoup(page.text, 'html.parser')
        total_problem = soup.find_all('tr', class_=['problemset-row0', 'problemset-row1'])
        for i in range(len(total_problem)):
            tds = total_problem[i].find_all('td')
            img_elements = tds[0].find_all('img')
            if img_elements:
                first_img_element = img_elements[0]
                solved = first_img_element.get('src')
                if solved == "Public/images/ac.gif":    solved = "Accepted"
                else:  solved = "Attempted"
            else:
                # 如果没有找到img元素，可以设置一个默认值或者处理其他逻辑
                solved = 'Unsolved'

            problem_id = tds[1].text
            title = tds[2].text
            problem_url.append(tds[2].find('a').get('href'))
            rating_img = tds[3].find_all('img')
            r_as = tds[4].text
            ur_as = tds[5].text

            # if solved:
            #     if solved == "Public/images/ac.gif":    solved = "Solved"
            #     elif solved == "Public/images/wa.gif":  solved = "attempt"
            # else:
            #     solved = "Unsolved"
            
            cnt = 0
            for j in range(len(rating_img)):
                if rating_img[j].get('src') == 'Public/images/star-solid.png':
                    cnt += 1
                else:
                    cnt += 0.5
            rating_img = str(cnt)


            data.append([solved,problem_id,title,rating_img,r_as,ur_as])
        
        for row_data in data:
            row_items = [QStandardItem(item) for item in row_data]
            self.model.appendRow(row_items)

        self.table_view.setEditTriggers(QAbstractItemView.NoEditTriggers) # 只可读
        self.table_view.setModel(self.model)
        for row_index in range(self.model.rowCount()):
            state_item = self.model.item(row_index, 0)  # 第1列（State）
            if state_item is not None:
                state_text = state_item.text()
                if state_text == "Attempted":
                    state_item.setForeground(QtGui.QColor(Qt.red))
                elif state_text == "Accepted":
                    state_item.setForeground(QtGui.QColor(Qt.green))
                elif state_text == "Unsolved":
                    state_item.setForeground(QtGui.QColor(Qt.black))
        self.table_view.setModel(self.model)

        # # 创建一个主布局管理器，将表单部件和表格视图垂直排列
        main_layout = QVBoxLayout()
        main_layout.addLayout(com_layout)
        main_layout.addLayout(que_layout)
        main_layout.addWidget(self.table_view)

        # print(2)
        # 创建一个QWidget作为窗口的中心部件，设置主布局管理器
        container = QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)
        # print(1)

        # # 手动设置每一列的宽度
        # self.table_view.setColumnWidth(0, 500)  
        # self.table_view.setColumnWidth(1, 300)  
        # self.table_view.setColumnWidth(2, 200)  
        # self.table_view.setColumnWidth(3, 200)  
        # self.table_view.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)
        self.table_view.horizontalHeader().setSectionResizeMode(0, QHeaderView.ResizeToContents) #自适应
        self.table_view.horizontalHeader().setSectionResizeMode(1, QHeaderView.ResizeToContents)
        self.table_view.horizontalHeader().setSectionResizeMode(3, QHeaderView.ResizeToContents)

        # 设置其他列占满剩余空间
        for column in [2,4,5]:
            self.table_view.horizontalHeader().setSectionResizeMode(column, QHeaderView.Stretch)
        self.volune_edit.setFocus()

        self.table_view.doubleClicked.connect(self.GoToproblem)

    def GoToproblem(self,index):
        from problemlist_problem_info import goTopage
        # print(index.row())
        global problem_url
        # print(problem_url)
        goTopage(problem_url[index.row()])

    def perform_query(self):
        # 在此处执行查询操作，根据文本框中的内容过滤数据
        
        self.query_signal.emit(self.volune_edit.text(), self.search_edit.text(), self.search_combox.currentData(role=Qt.UserRole))

    def GoToContest_list(self):
        from hrbustoj import main
        global window
        window.close()
        params={
            "ctitle":"",
            "ctype":"",
            "cstate":"",
            "page_id":"1"
        }
        main(params)

    def onEnterPressed(self):
        self.perform_query()

    def GoToProblem_list(self):
        pass

    def GoToGlobal_Rating(self):
        from problemlist_rating import goTopage
        params={
            "m":"Ranklist",
            "a":"showRatingrank",
            "page_id":"1",
            "name":""
        }
        global window
        window.close()
        goTopage(params)

    def GoToGlobal_status(self):
        from problemlist_status import goTostatus
        params={
            "problem_id":"",
            "user_name":"",
            "judge_status":"0",
            "language":"0",
            "shared":"0",
            "status_vol":"1"
        }
        global window
        window.close()
        goTostatus(params)

def goToProblemlist(params):
    # from hrbustoj import app
    global window
    window = ProblemSetApp()
    window.initUI(params)
    window.center()
    window.show()
    window.query_signal.connect(goTopage)
    # sys.exit(app.exec_())

if __name__ == '__main__':

    params={
        "a":"showProblemVolume",
        "vol":"16"
    }
    app = QApplication(sys.argv)
    # session.post(url + "/index.php?m=ProblemSet&a=showProblemVolume&vol=" + "cid",data=data,headers=headers,params=params)
    goToProblemlist(params)
    sys.exit(app.exec_())
