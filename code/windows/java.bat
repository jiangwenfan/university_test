@echo off
echo ########################################################
echo ##### 				                   #####
echo #####   java环境变量配置，默认安装路径             #####
echo #####                 			           #####
echo ########################################################
echo;

setx "java10" "C:\Program Files\Java\jdk-11\" /m
setx "Path" "%Path%;%java10%\bin" /m

echo;
java --version

echo;
echo;
pause