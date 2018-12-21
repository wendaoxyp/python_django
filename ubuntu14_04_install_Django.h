ubuntu14.01
指定版本安装
apt-get install package=version
查看软件版本
apt-cache policy package

0、安装ssh
sudo apt-get install openssh-server
ifconfig -a
http://xiazai.xshellcn.com/wm/XshellPlus6_wm.exe
启动openssh服务。
sudo service ssh start
查看sshd
ps -ef | grep sshd

1、安装python 安装固定版本见1.5
1.1. 添加源
sudo add-apt-repository ppa:jonathonf/python-3.6
1.2. 安装  （可以通过pip是实现安装）
sudo apt-get update
sudo apt-get install python3.6
1.3. 在虚拟环境下搭建以python3.6为解释器的工作环境
1.4、切换版本
调整Python3的优先级，使得3.6优先级较高
sudo update-alternatives --install /usr/bin/python3 python3 /usr/bin/python3.5 1
sudo update-alternatives --install /usr/bin/python3 python3 /usr/bin/python3.6 2
更改默认值，python默认为Python2，现在修改为Python3
sudo update-alternatives --install /usr/bin/python python /usr/bin/python2 100
sudo update-alternatives --install /usr/bin/python python /usr/bin/python3 150
切换到Python2
sudo update-alternatives --config python
验证
python --version
python3.6 --version

1.5安装固定版本
wget https://www.python.org/ftp/python/3.6.0/Python-3.6.0.tar.xz  
xz -d Python-3.6.0.tar.xz  
tar -xvf  Python-3.6.0.tar 
 cd Python-3.6.0  
./configure  
make  
sudo make install 


2、安装pycharm
2.1、安装umake
sudo add-apt-repository ppa:ubuntu-desktop/ubuntu-make
sudo apt-get update
sudo apt-get install ubuntu-make
2.2、安装pycharm
umake ide pycharm-professional
安装完成之后，去Unity Dash 搜索Pycharm。
通过umake来卸载pycharm
umake -r ide pycharm


3、安装MySQL
3.1安装
sudo apt-get update
sudo apt-get install mysql-client-core-5.6
sudo apt-get install mysql-client-5.6
sudo apt-get install mysql-server-5.6
验证

3.2.检查mysql是否启动
1.查看mysql进程是否运行
ps -ef | grep mysql
2.查看msyql 监听端口
netstat -tap | grep mysql

3.3操作
1.msyql服务停止
sudo service mysql stop
如果不是root用户请执行
sudo service mysql stop
2. Mysql 服务启动
sudo service mysql start
3. Mysql 服务重启
sudo service mysql restart

3.4配置MySQL
sudo vim /etc/mysql/my.cnf


4、安装Django
pip是一个安装和管理Python包的工具
4.1安装Pip
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install python3-pip
验证版本
pip3 -V
4.2安装Django
sudo pip3 install Django==1.11.4
提示Successfully installed Django
验证
import django
print django.VERSION # Python2的格式
print（django.VERSION) # Python3的格式

pycharm激活码
AWAC5NN6E4-eyJsaWNlbnNlSWQiOiJBV0FDNU5ONkU0IiwibGljZW5zZWVOYW1lIjoibGIgb2QiLCJhc3NpZ25lZU5hbWUiOiIiLCJhc3NpZ25lZUVtYWlsIjoiIiwibGljZW5zZVJlc3RyaWN0aW9uIjoiRm9yIGVkdWNhdGlvbmFsIHVzZSBvbmx5IiwiY2hlY2tDb25jdXJyZW50VXNlIjpmYWxzZSwicHJvZHVjdHMiOlt7ImNvZGUiOiJJSSIsInBhaWRVcFRvIjoiMjAxOS0wNy0yOSJ9LHsiY29kZSI6IlJTMCIsInBhaWRVcFRvIjoiMjAxOS0wNy0yOSJ9LHsiY29kZSI6IldTIiwicGFpZFVwVG8iOiIyMDE5LTA3LTI5In0seyJjb2RlIjoiUkQiLCJwYWlkVXBUbyI6IjIwMTktMDctMjkifSx7ImNvZGUiOiJSQyIsInBhaWRVcFRvIjoiMjAxOS0wNy0yOSJ9LHsiY29kZSI6IkRDIiwicGFpZFVwVG8iOiIyMDE5LTA3LTI5In0seyJjb2RlIjoiREIiLCJwYWlkVXBUbyI6IjIwMTktMDctMjkifSx7ImNvZGUiOiJSTSIsInBhaWRVcFRvIjoiMjAxOS0wNy0yOSJ9LHsiY29kZSI6IkRNIiwicGFpZFVwVG8iOiIyMDE5LTA3LTI5In0seyJjb2RlIjoiQUMiLCJwYWlkVXBUbyI6IjIwMTktMDctMjkifSx7ImNvZGUiOiJEUE4iLCJwYWlkVXBUbyI6IjIwMTktMDctMjkifSx7ImNvZGUiOiJHTyIsInBhaWRVcFRvIjoiMjAxOS0wNy0yOSJ9LHsiY29kZSI6IlBTIiwicGFpZFVwVG8iOiIyMDE5LTA3LTI5In0seyJjb2RlIjoiQ0wiLCJwYWlkVXBUbyI6IjIwMTktMDctMjkifSx7ImNvZGUiOiJQQyIsInBhaWRVcFRvIjoiMjAxOS0wNy0yOSJ9LHsiY29kZSI6IlJTVSIsInBhaWRVcFRvIjoiMjAxOS0wNy0yOSJ9XSwiaGFzaCI6Ijk3MTIyNDQvMCIsImdyYWNlUGVyaW9kRGF5cyI6MCwiYXV0b1Byb2xvbmdhdGVkIjpmYWxzZSwiaXNBdXRvUHJvbG9uZ2F0ZWQiOmZhbHNlfQ==-J7A2LN3UfLpNESfB2nIwG4+t956Kn1xIQmo/rYpsWhl2RO4x5wy5eD6TFUJP8DrI77LBYiuOK1J3LYVQB9guuGsaev7Ry7cCb9SZZentiai6z3NF5FWBG3bEtc/9jWNaTJpgjbw3UtIu8XONmD3o8QcsMpl5rryUgJ0wV8JKfC1P0nyIJbqm0zY850uUELtSkSHVkWn47zV9sD87uj5h8fvXYeuwZdImIjbZYiYHO5SObgvUrNHYOWx8RSJhIndZiNLw+G9NzQdFulhE+WU/KywKiAO8bR17VCDIY2mcw0pxpA3AGt6/2kwJoZ2zp8tM7y3hZw41js7TigjoRuC4Hw==-MIIEPjCCAiagAwIBAgIBBTANBgkqhkiG9w0BAQsFADAYMRYwFAYDVQQDDA1KZXRQcm9maWxlIENBMB4XDTE1MTEwMjA4MjE0OFoXDTE4MTEwMTA4MjE0OFowETEPMA0GA1UEAwwGcHJvZDN5MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAxcQkq+zdxlR2mmRYBPzGbUNdMN6OaXiXzxIWtMEkrJMO/5oUfQJbLLuMSMK0QHFmaI37WShyxZcfRCidwXjot4zmNBKnlyHodDij/78TmVqFl8nOeD5+07B8VEaIu7c3E1N+e1doC6wht4I4+IEmtsPAdoaj5WCQVQbrI8KeT8M9VcBIWX7fD0fhexfg3ZRt0xqwMcXGNp3DdJHiO0rCdU+Itv7EmtnSVq9jBG1usMSFvMowR25mju2JcPFp1+I4ZI+FqgR8gyG8oiNDyNEoAbsR3lOpI7grUYSvkB/xVy/VoklPCK2h0f0GJxFjnye8NT1PAywoyl7RmiAVRE/EKwIDAQABo4GZMIGWMAkGA1UdEwQCMAAwHQYDVR0OBBYEFGEpG9oZGcfLMGNBkY7SgHiMGgTcMEgGA1UdIwRBMD+AFKOetkhnQhI2Qb1t4Lm0oFKLl/GzoRykGjAYMRYwFAYDVQQDDA1KZXRQcm9maWxlIENBggkA0myxg7KDeeEwEwYDVR0lBAwwCgYIKwYBBQUHAwEwCwYDVR0PBAQDAgWgMA0GCSqGSIb3DQEBCwUAA4ICAQC9WZuYgQedSuOc5TOUSrRigMw4/+wuC5EtZBfvdl4HT/8vzMW/oUlIP4YCvA0XKyBaCJ2iX+ZCDKoPfiYXiaSiH+HxAPV6J79vvouxKrWg2XV6ShFtPLP+0gPdGq3x9R3+kJbmAm8w+FOdlWqAfJrLvpzMGNeDU14YGXiZ9bVzmIQbwrBA+c/F4tlK/DV07dsNExihqFoibnqDiVNTGombaU2dDup2gwKdL81ua8EIcGNExHe82kjF4zwfadHk3bQVvbfdAwxcDy4xBjs3L4raPLU3yenSzr/OEur1+jfOxnQSmEcMXKXgrAQ9U55gwjcOFKrgOxEdek/Sk1VfOjvS+nuM4eyEruFMfaZHzoQiuw4IqgGc45ohFH0UUyjYcuFxxDSU9lMCv8qdHKm+wnPRb0l9l5vXsCBDuhAGYD6ss+Ga+aDY6f/qXZuUCEUOH3QUNbbCUlviSz6+GiRnt1kA9N2Qachl+2yBfaqUqr8h7Z2gsx5LcIf5kYNsqJ0GavXTVyWh7PYiKX4bs354ZQLUwwa/cG++2+wNWP+HtBhVxMRNTdVhSm38AknZlD+PTAsWGu9GyLmhti2EnVwGybSD2Dxmhxk3IPCkhKAK+pl0eWYGZWG3tJ9mZ7SowcXLWDFAk0lRJnKGFMTggrWjV8GYpw5bq23VmIqqDLgkNzuoog==
https://blog.csdn.net/u014256231/article/details/79565216
https://blog.csdn.net/weixin_42534818/article/details/84929473
