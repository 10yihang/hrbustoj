import tkinter as tk

data = [
    ("232321", "A", "AC", "C++", "1000", "256", "256", "2023-09-01 10:00:00"),
    ("223232", "B", "WA", "Python", "2000", "512", "512", "2023-09-01 10:05:00"),
    ("323232", "C", "Time Limit Exceeded", "Java", "3000", "1024", "1024", "2023-09-01 10:10:00"),
    # Add more rows as needed
]

def create_table(root, data):
    for i, header in enumerate(["RunID", "ID", "JudgeStatus", "Language", "Time", "Memory", "Length", "SubmitTime"]):
        label = tk.Label(root, text=header, font=("Arial", 12, "bold"))
        label.grid(row=0, column=i, padx=5, pady=5, sticky="nsew")

    # for row_index, row_data in enumerate(data, start=1):
    #     for col_index, cell_data in enumerate(row_data):
    #         label = tk.Label(root, text=cell_data, font=("Arial", 12))
    #         label.grid(row=row_index, column=col_index, padx=5, pady=5, sticky="nsew")

    # # Configure row and column weights to expand with the window
    # for i in range(len(data) + 1):  # +1 to include the header row
    #     root.grid_rowconfigure(i, weight=1)
    # for i in range(len(data[0])):  # Assuming all rows have the same number of columns
    #     root.grid_columnconfigure(i, weight=1)

root = tk.Tk()
root.title("Data Table")

create_table(root, data)

root.mainloop()
