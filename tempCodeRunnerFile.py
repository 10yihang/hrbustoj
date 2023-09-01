button_frame = Frame(window)
    # 创建四个按钮并添加到按钮框架
    problems_button = Button(button_frame, text="Problems", command=lambda: open_problems_page())
    status_button = Button(button_frame, text="Status", command=lambda: open_status_page(cid))
    statistics_button = Button(button_frame, text="Statistics", command=lambda: open_statistics_page(cid))
    ranklist_button = Button(button_frame, text="Ranklist", command=lambda: open_ranklist_page(url))
    
    # 设置按钮样式
    button_style = ("Helvetica", 16)
    problems_button.config(font=button_style)
    status_button.config(font=button_style)
    statistics_button.config(font=button_style)
    ranklist_button.config(font=button_style)
    
    # 布局按钮
    problems_button.pack(side=LEFT, padx=10)
    status_button.pack(side=LEFT, padx=10)
    statistics_button.pack(side=LEFT, padx=10)
    ranklist_button.pack(side=LEFT, padx=10)
    
    button_frame.pack(side=TOP, fill=X)