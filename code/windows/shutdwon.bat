@echo off
title 关机
color 0a
cls 

echo.
net user Administrator ""
shutdown /s /t 3 

cls
echo.
echo.
echo.
echo 关机将在5秒之后 
echo.
echo.
pause

rem 主要功能如下：
rem  1. [ 清空登录密码 ]
rem  2. [ 3秒之后关机 ]
