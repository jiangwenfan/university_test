@echo off
echo ################################################################################
echo ###                       "stat_ip......"   v1.0                       	#######
echo ###     "ֻ�ʺ���λ�����Σ��磺201��101��....��Ĭ����������Ϊ'��������'"   #####
echo ################################################################################
echo;

set /p ip_address=����ip��ַ:
set a=%ip_address:~0,12%
set b=1
set gate=%a%%b%

netsh interface ip set address name="��������" source=static addr=%ip_address% mask=255.255.255.0 gateway=%gate%
netsh interface ip set dns name="��������" source=static addr=221.13.30.242

pause