@echo off
rem #【根据实际情况选择网卡的名字】。

echo "正在配置网络为dhcp。。。"
netsh interface ipv4 set address name="本地连接" source=dhcp

ipconfig /all

rem #find -V ipv4[过滤出ipv4地址]

pause