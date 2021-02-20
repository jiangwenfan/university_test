@echo off
title 开机
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
echo 完成
echo.
echo.
pause

rem 没有密码会自动进入桌面的。
rem 主要功能如下：
rem  1. [ 设置用户密码 ]
rem  2.	[ 执行其他脚本 ] 一个启动全局好处是：不用考虑顺序的问题
rem  3. [ 锁屏 ]   2和3可以调换位置。
