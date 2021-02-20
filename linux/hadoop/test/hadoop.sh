echo -e "设置主机名为hadoopOne \n"
echo hadoopOne > /etc/hostname

echo -e "在hosts文件中注册主机名 \n"
echo 127.0.0.1 >> /etc/hosts

echo  -e "请上传hadoop压缩包，随后进行下一步安装 \n"