;test1
assume cs:test1
	test1 segment
		mov ax,100H
		add ax,ax
		mov bx,300H
		add ax,bx
		
		mov ax,4c00H
		int 21H
	test1 ends
	test2 segment
		mov ax,20H
		mov bx,20H
		add ax,bx
		add bx,bx
	test2 ends
end