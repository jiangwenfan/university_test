# linux

```bash
#查看file或folder的大小
du -sh a.txt 
du -sh /etc/

#查看分区使用情况
df -h /dev/sda1

#翻页查看文件内容
less a.txt  

#加上行号查看内容
cat -n a.txt
cat -b a.txt #给空白行不加

#清空文件内容
cat /dev/null > a.txt

#切换目录
. 当前目录
.. 当前目录的父目录
~  当前用户的家目录
/  root的家目录

#创建多级目录
mkdir -p  /a/b/c

#(默认覆盖)复制目录
cp -r  test1/  test2/

#删除文件目录
rm -rf a.txt

#查看命令的绝对路径
which vim 

#查看内核系统版本
uname -a 
#查看usb设备
lsusb 
#查看网卡状态
ethtool eth0 
#查看cpu信息
cat /proc/cpuinfo 

fdisk -l //查看磁盘信息 
df -h //查看磁盘剩余空间 
free -m //查看内存使用情况 
ps -a //查看当前进程 
kill 进程号 //杀死进程 
kill -9 进程号 //强制杀死进程。

#查看网关
route -n
ip route show

#判断具体的linux发行版
lsb_release -a

#查看进程
ps aux | less
``` 
```bash
#下载到指定目录中
wget -p /test https://1.1.1.1/a.txt  

#16进制程序查看器
bless

#设置apt代理
export http_proxy=127.0.0.1:8081
#取消apt代理
unset http_proxy
```

# windows
