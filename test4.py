'''
author: yihang_01
Date: 2023-08-27 21:55:24
LastEditTime: 2023-09-02 18:35:56
Description: 爱自己最重要啦
QwQ 加油加油
'''
import tkinter as tk

def set_text_color(text_widget, text, color):
    text_widget.tag_configure(color, foreground=color)
    text_widget.insert(tk.END, text, color)
    text_widget.insert(tk.END, '\n')  # 换行

root = tk.Tk()
root.title("Text Color Example")
root.geometry("400x300")

text_widget = tk.Text(root, wrap=tk.WORD)
text_widget.pack()

# 添加一些示例文本，包括不同状态的文本
set_text_color(text_widget, "Accepted", "green")
set_text_color(text_widget, "Unsolved", "gray")
set_text_color(text_widget, "Attempted", "red")

root.mainloop()
