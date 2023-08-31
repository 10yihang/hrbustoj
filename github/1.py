import requests
# from werkzeug.utils import cached_property
import robobrowser



# 获取对象
b = robobrowser.RoboBrowser(parser='lxml')
# 打开表单的网址
b.open('http://acm.hrbust.edu.cn/contests/index.php?act=login&cid=2085')
# 获得要提交的哪个表单
f = b.get_form(action='index.php?act=login&cid=2085')
# 登录的账号
# f['login'].value = '15700041128@163.com'
# 登录的密码
# f['password'].value = 'hyh621354'
# 提交表单
b.submit_form(f)
# 获取提交成功后主页的数据
contest_result=[]
for a_tag in b.select('a[href]'):
    print(a_tag.attrs['href'])

b.follow_link(b.get_link('href'))
print(b)
