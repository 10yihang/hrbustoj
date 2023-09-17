def GoToproblem_info(self, index):
        from contest_page import goTopage
        # 在此处处理行双击事件
        # print(self.model.item(index.row(), 0).text())
        name = self.model.item(index.row(), 0).text()
        global contest_url
        # print(contest_url[name])
        cid = contest_url[name].split("cid=")[1]
        params={
            "act":"login",
            "cid":cid
        }
        goTopage(params,cid)

    def GoToContest_list(self):
        pass

    def GoToProblem_list(self):
        from problemlist import goToProblemlist
        params={
            "a":"showProblemVolume",
            "vol":"1"
        }
        # app = QApplication(sys.argv)
        global window
        window.close()
        
        goToProblemlist(params)
        # sys.exit(app.exec_())

    def GoToGlobal_Rating(self):
        pass

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