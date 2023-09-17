'''
author: yihang_01
Date: 2023-09-13 19:21:52
LastEditTime: 2023-09-17 22:56:06
Description: 爱自己最重要啦
QwQ 加油加油
'''
import sys
import os
from PyQt5.QtWidgets import QApplication, QMainWindow, QVBoxLayout, QWidget, QLabel, QLineEdit, QPushButton
current_directory = os.path.dirname(os.path.abspath(__file__))  
login_file_path = os.path.join(current_directory, "login.txt")
class LoginWindow(QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("Login")
        self.setGeometry(100, 100, 400, 200)  # 设置窗口位置和大小

        central_widget = QWidget(self)
        self.setCentralWidget(central_widget)

        layout = QVBoxLayout()

        self.label_global_username = QLabel("Global Username:")
        self.input_global_username = QLineEdit()
        layout.addWidget(self.label_global_username)
        layout.addWidget(self.input_global_username)

        self.label_global_password = QLabel("Global Password:")
        self.input_global_password = QLineEdit()
        layout.addWidget(self.label_global_password)
        layout.addWidget(self.input_global_password)

        self.label_contest_username = QLabel("Contest Username:")
        self.input_contest_username = QLineEdit()
        layout.addWidget(self.label_contest_username)
        layout.addWidget(self.input_contest_username)

        self.label_contest_password = QLabel("Contest Password:")
        self.input_contest_password = QLineEdit()
        layout.addWidget(self.label_contest_password)
        layout.addWidget(self.input_contest_password)

        self.submit_button = QPushButton("Submit")
        layout.addWidget(self.submit_button)

        central_widget.setLayout(layout)

        self.submit_button.clicked.connect(self.save_credentials)

    def save_credentials(self):
        global_username = self.input_global_username.text()
        global_password = self.input_global_password.text()
        contest_username = self.input_contest_username.text()
        contest_password = self.input_contest_password.text()

        with open(login_file_path, "w") as file:
            file.write(f"global_username:{global_username}\n")
            file.write(f"global_password:{global_password}\n")
            file.write(f"contest_username:{contest_username}\n")
            file.write(f"contest_password:{contest_password}\n")

        self.close()

def main():
    # app = QApplication(sys.argv)


    if not os.path.exists(login_file_path):
        app = QApplication(sys.argv)

        login_window = LoginWindow()
        login_window.show()
        sys.exit(app.exec_())

    else:
        # 这里添加其他处理逻辑，比如读取已有的配置文件
        pass

    # sys.exit(app.exec_())

if __name__ == "__main__":
    main()
