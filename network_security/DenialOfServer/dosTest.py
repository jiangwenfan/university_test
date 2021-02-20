#dosTest.py
import scapy
i=IP()  #i.display()
i.dst="1.1.1.1" #目标IP地址
 
t=TCP()  #t.display() 
t.dport=22  #目标攻击端口   flags=s
sr1(i/t,verbose=1,timeout=3) #发送数据包