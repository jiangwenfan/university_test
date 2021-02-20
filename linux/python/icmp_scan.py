#1.多线程扫描存活主机。
#!/usr/bin/python3
import threading
from scapy.all import *

network_num=str(input("输入网段[eg:192.168.201.] : "))
all_ip=[]

for i in range(255):
    ip=network_num+str(i)
    all_ip.append(ip)

def scan(args):
    for i in args:
        package=IP(dst=i)/ICMP()
        ans,unans=sr(package,timeout=1)
        if list(ans) !=[]:
            alive_ip=list(ans)[0][1][IP].src+'\n'
            with open('host_alive.txt','a+') as f:
                f.write(alive_ip)
        else:
            pass

def son_threading():
    for j in range(15):
        start_num=17*j
        end_num=start_num+17
        ip_range=all_ip[start_num:end_num]
        j=threading.Thread(target=scan,args=(ip_range,))
        j.start()

if __name__=='__main__':
    son_threading()
    #print(all_ip[17:34])
    #scan(all_ip[17:34])
    
    

#2.从nmap扫描结果中提取ip
### /usr/bin/python3
import os
def environment():
	os.system("mkdir nmap_dispose && mv ip.txt ./nmap_dispose/ ") #create clean environment
	os.system("mv nmap_ip_analysis nmap_dispose/")

def shell_filtration():  #默认为ip.txt 生成 ip_1.txt
	shell_command="cat ip.txt |grep -v Starting|grep -v MAC|grep -v Host|grep -v done > ip_1.txt"
	os.system(shell_command)

def py_filtration():
	with open("ip_1.txt") as f_obj:
		ip_1_text=f_obj.read()
		list_1=ip_1_text.split("\n") #list_1
	for x in range(len(list_1)-1):
		list_2=list_1[x].split(" ") #list_2
		list_2_element=list_2[4]  #single ip
		with open("clean_ip.txt",'a') as f_obj:
			f_obj.write(list_2_element+"\n") #写入
	os.system("rm -rf ip_1_text")

