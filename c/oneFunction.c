#include <stdio.h>

int add(int a,int b);
int main()
{
	printf("这是一个练习程序:\n");
	printf("只有一个add函数，用来计算加法!\n");
	int res;
	res = add(3,4);
	printf("\n结果是:%d\n",res);
	return 0;
}
int add(int a,int b)
{
	int res = a+b;
	return res;
 } 
