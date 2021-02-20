### 特殊符号解释：
```bash
& 表示在后台运行
aa && bb 表示aa执行成功后，执行bb
aa || bb 表示aa执行失败后，执行bb
ls | grep aa  ls命令的输出作为grep命令的参数

~ 表示用户的家目录
- 表示上一次目录 
```

```bash
free -m #查看内存使用情况
df -h #查看每个分区的使用情况
fdisk -l #查看磁盘信息
cat /proc/cpuinfo #查看cpu信息
ethtool eth0 #查看网卡状态
lsusb #查看usb状态
uname使用待补充
ps -aux #显示系统所有进程
ps -ef 
```

```bash
cp -r test/* test22/  #将test目录下的所有东西复制到test22下。必须加-r
less /etc/password #前后滚动显示内容
cat -n /etc/password #对输出的行编号
which ls #查找ls命令的绝对路径
mkdir -p /aa/bb/cc #创建多级目录

du 可以查看文件以及文件夹的大小。du是统计目录大小相加。
参数：
--max-depth 表示深入目录的层数。
-h 表示使用容易识别的单位(G,M)
du -sh  /var  #显示整个目录的大小。
du -h  --max-depth 1 /var  #显示该目录下的每一个子目录的大小。

ls | wc -l #统计当前目录下的文件及目录个数

tree -L 2 /test #指定下降2层
tree -a /test #显示隐藏文件
wget -P(大写) /test https://www.baidu.com #指定下载的目录
rz #上传文件. lrzsz
sz 1.txt #下载文件

route -n #查看网关
dhclient -r eth0 #重新获取ip
dpkg -i xxx.deb #安装
alien xxx.rpm #rpm转deb
export http_proxy=1.1.1.1:1080 #设置命令行代理
export https_proxy=1.1.1.1:1080
unset http_proxy #取消代理
unset https_proxy
```
```bash
zip  test.zip *.txt #压缩所有文件
zip -r test.zip * #压缩中含有目录的使用-r参数，否则目录中的文件不能被压缩。
unzip test.zip -d /test/ #解压到指定路径。不管test目录存在与否
unzip -O GBK xxx.zip #解压windows压缩包乱码的问题

tar -zxvf xxx.tar.gz #解压缩tar.gz文件

rm -rf /var/crash/* #清除ubuntu错误提示
#显示未托管问题:
[1]vim /etc/NetworkManager/NetworkManager.conf
	managed=true
重启电脑
[2]情况以前自己的命令行配置，重启服务。
systemctl restart networking




/proc 虚拟目录，内存的映射
/opt 安装软件的目录
/mnt 临时挂载
/media 自动挂载的目录
/lib 动态链接库
/dev 外部设备
/bin 经常使用的命令
df 可以查看一级问价夹大小，使用比例，档案系统及其挂载点，但对文件却无能English。
df是统计数据块使用情况。
```
