#include <stdio.h>
#include <windows.h>  //windows api函数专用头文件

int mainB()
{

	MessageBox(NULL,TEXT("hello c"), TEXT("标题"), MB_OK);
	return 0;
}