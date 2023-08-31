'''
author: yihang_01
Date: 2023-08-26 22:45:05
LastEditTime: 2023-08-31 16:46:05
Description: 爱自己最重要啦
QwQ 加油加油
'''
import tkinter as tk

def add_text():
    content = "This is some example text. " * 20  # Create a long text for demonstration
    text_widget.insert(tk.END, content)

root = tk.Tk()
root.title("Vertical Scroll Example")
root.geometry("600x400")

canvas = tk.Canvas(root)
canvas.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)

scrollbar = tk.Scrollbar(root, command=canvas.yview)
scrollbar.pack(side=tk.RIGHT, fill=tk.Y)

canvas.configure(yscrollcommand=scrollbar.set)

frame = tk.Frame(canvas)
canvas.create_window((0, 0), window=frame, anchor='nw')

text_widget = tk.Text(frame, wrap=tk.WORD, font=("Arial", 12))
text_widget.pack(fill=tk.BOTH, expand=True)

add_button = tk.Button(frame, text="Add Text", command=add_text)
add_button.pack()

# Update the scrollable area
def update_scroll_region(event):
    canvas.configure(scrollregion=canvas.bbox("all"))

frame.bind("<Configure>", update_scroll_region)

root.mainloop()
