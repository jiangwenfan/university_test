@echo off
rem #������ʵ�����ѡ�����������֡���

echo "������������Ϊdhcp������"
netsh interface ipv4 set address name="��������" source=dhcp

ipconfig /all

rem #find -V ipv4[���˳�ipv4��ַ]

pause