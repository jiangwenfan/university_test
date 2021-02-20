@echo off
echo ################################################################################
echo ###                       "stat_ip......"   v1.0                       	#######
echo ###     "只适合三位数网段，如：201，101，....；默认网卡名称为'本地连接'"   #####
echo ################################################################################
echo;

set /p ip_address=输入ip地址:
set a=%ip_address:~0,12%
set b=1
set gate=%a%%b%

netsh interface ip set address name="本地连接" source=static addr=%ip_address% mask=255.255.255.0 gateway=%gate%
netsh interface ip set dns name="本地连接" source=static addr=221.13.30.242

pause