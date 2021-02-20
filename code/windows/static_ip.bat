@echo off

echo "正在配置IP地址。。。。"
netsh interface ipv4 set address "本地连接" static 192.168.201.222 255.255.255.0 192.168.201.1

echo "正在配置DNS地址。。。"
netsh interface ipv4 set dns "本地连接" static 221.13.30.242

ipconfig /all
pause "执行完成。。"


rem #find -V 只显示ipv4地址[待补充]
rem #echo "重启网络。。。"
rem #netsh winsock reset
rem #根据实际情况填写【ip地址，网关，dns,网卡名称】
