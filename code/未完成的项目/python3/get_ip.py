#!/usr/bin/python3
import os
from send_email import sendEmail

ipStr = os.popen("ifconfig |grep inet |grep -v inet6").read()
ipStr = ipStr.strip() #去除空白
ipList=ipStr.split("\n")

ipall=""
for ipInfo in ipList:
    ip=ipInfo.strip().split()[1]
    ipHead = ip.split(".")[0]
    if ipHead == "192":
        #iplist.append(ip)
        ipall = "---"+ipall+ip+"---------"
#print(ipall)
ipall = "\t\t\t\t\t"+ipall
sendEmail(ipall)


