@echo off

echo "��������IP��ַ��������"
netsh interface ipv4 set address "��������" static 192.168.201.222 255.255.255.0 192.168.201.1

echo "��������DNS��ַ������"
netsh interface ipv4 set dns "��������" static 221.13.30.242

ipconfig /all
pause "ִ����ɡ���"


rem #find -V ֻ��ʾipv4��ַ[������]
rem #echo "�������硣����"
rem #netsh winsock reset
rem #����ʵ�������д��ip��ַ�����أ�dns,�������ơ�
