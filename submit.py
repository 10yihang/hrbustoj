'''
author: yihang_01
Date: 2023-09-13 19:21:52
LastEditTime: 2023-09-18 19:40:15
Description: 爱自己最重要啦
QwQ 加油加油
'''
import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QTableView, QVBoxLayout, QWidget, QPushButton, QLabel, QLineEdit,QFormLayout,QHBoxLayout,QComboBox,QDesktopWidget,QAbstractItemView,QHeaderView,QTextEdit,QRadioButton
from PyQt5.QtGui import QStandardItemModel, QStandardItem
from PyQt5.uic import loadUi
from PyQt5.QtCore import Qt
from PyQt5 import QtCore
# from PyQt5.QtGui import QColor
from PyQt5 import QtGui
from global_var import session,headers,current_directory
import os,encodings
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
sys.path.append(os.path.join(BASE_DIR, 'client'))
class SubmitCodeApp(QMainWindow):
    def __init__(self):
        super().__init__()
        # 设置窗口大小为全屏
        self.setWindowTitle("hrbustoj")
        self.resize(1280,800)
        self.setWindowIcon(QtGui.QIcon(current_directory+"\img\\003.jpg"))


    def center(self):  # 定义一个函数使得窗口居中显示
        # 获取屏幕坐标系
        screen = QDesktopWidget().screenGeometry()
        # 获取窗口坐标系
        size = self.geometry()
        newLeft = (screen.width() - size.width()) / 2
        newTop = (screen.height() - size.height()) / 2
        self.move(int(newLeft),int(newTop))
    

    def initUI(self,cid,title):

        self.setWindowTitle(title)

        self.selected_language = "2"  # Default language selection

        self.languages = [("G++", "2"), ("GCC", "1"), ("JAVA", "3"), ("Python3", "6"), ("PHP", "4"), ("Haskell", "7")]

        self.languageLabel = QLabel("Select Language:")
        self.languageLayout = QHBoxLayout()

        self.languageLayout.addWidget(self.languageLabel)

        self.textEdit = QTextEdit()
        self.textEdit.setLineWrapMode(QTextEdit.WidgetWidth)
        self.textEdit.setFont(QtGui.QFont("Consolas", 15))
        self.textEdit.setPlaceholderText("Please input your code here")
        self.textEdit.setTextBackgroundColor(Qt.white)
        
        self.submitButton = QPushButton("Submit")
        self.submitButton.setFixedHeight(50)

        for lang, value in self.languages:
            radio_button = QRadioButton(lang)
            radio_button.setChecked(value == self.selected_language)
            radio_button.toggled.connect(self.choose_language)
            self.languageLayout.addWidget(radio_button)

        self.submitButton.clicked.connect(lambda:self.click_submit(cid))

        main_layout = QVBoxLayout()

        main_layout.addLayout(self.languageLayout)
        main_layout.addWidget(self.textEdit)
        main_layout.addWidget(self.submitButton)

        container = QWidget()
        container.setLayout(main_layout)
        self.setCentralWidget(container)

    def choose_language(self):
        sender = self.sender()
        if sender.isChecked():
            self.selected_language = next(value for lang, value in self.languages if lang == sender.text())

    def click_submit(self,cid):
        if self.textEdit.document().isEmpty():
            return
        from problemlist_status import goTostatus
        source_code = self.textEdit.toPlainText()
        # print(f"Selected Language: {self.selected_language}")
        # print(f"Source Code:\n{source_code}")
        # print(f"Problem ID: {cid}")
        data = {
            'jumpUrl':'',
            'language':self.selected_language,
            'source_code':source_code,
            'problem_id':cid,
        }
        response = session.post("http://acm.hrbust.edu.cn/index.php?m=ProblemSet&a=postCode", data=data, headers=headers)
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
        # Add your code to submit the code here

def Submit(cid,title):
    global window
    window = SubmitCodeApp()
    window.initUI(cid,title)
    window.center()
    window.show()

if __name__ == '__main__':
    app = QApplication(sys.argv)
    Submit(1000,"A+B Problem")
    sys.exit(app.exec_())

