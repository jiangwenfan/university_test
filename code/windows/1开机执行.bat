@echo off
title ����
color 0a
cls

echo.
net user Administrator binary
cd two
start "new-win" cmd /c call startup.bat 

rundll32.exe   user32.dll,LockWorkStation

cls
echo.
echo.
echo ���
echo.
echo.
pause

rem û��������Զ���������ġ�
rem ��Ҫ�������£�
rem  1. [ �����û����� ]
rem  2.	[ ִ�������ű� ] һ������ȫ�ֺô��ǣ����ÿ���˳�������
rem  3. [ ���� ]   2��3���Ե���λ�á�
