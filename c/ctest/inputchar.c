#include <stdio.h>

int main2()
{

	char ch;  //123#456
	while ((ch=getchar()) != '#')
	{
		putchar(ch); //123
	}
	return 0;
}