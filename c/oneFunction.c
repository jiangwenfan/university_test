#include <stdio.h>

int add(int a,int b);
int main()
{
	printf("����һ����ϰ����:\n");
	printf("ֻ��һ��add��������������ӷ�!\n");
	int res;
	res = add(3,4);
	printf("\n�����:%d\n",res);
	return 0;
}
int add(int a,int b)
{
	int res = a+b;
	return res;
 } 
