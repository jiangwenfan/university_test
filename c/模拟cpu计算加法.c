#include <stdio.h>
#include <math.h>


int main1()
{
	//strlen();
	int num1 = 2;
	int num2 = 3;
	char binNum1[] = "0010";
	char binNum2[] = "0011";
	char binTem[100] = "#";
	char binTem2[100] = "#";
	char test[100];
	int sumTo = 2;
	int judge=0;
	printf("待计算的数字是:%d 和 %d\n",num1,num2);
	printf("\n---------------cpu模拟计算过程-------------\n");
	printf("共计进行 %d 步骤完成计算\n",sumTo);
	
	printf("待计算的二进制是 %s 和 %s\n\n",binNum1,binNum2);
	printf("第一步进行异或运算\n");
	int len1 = strlen(binNum1);
	//printf("%d",len1);
	//这个是异或运算
	for (int i = 0; i < len1; i++)
	{
		if (binNum1[i] == binNum2[i])
		{
			strcat(binTem,"0");
		}else
		{
			strcat(binTem,"1");
		}	
	}
	char* p = strtok(binTem, "#"); //p是经过处理的数组值
	if(p != NULL)
	{
		char* p1 = p;
		printf("异或运算的值是:%s\n", p1);
	}

	printf("\n第二步进行与运算:\n");
	for (int i = 0; i < len1; i++)
	{
		if (binNum1[i] == '1' && binNum2[i] == '1')
		{
			strcat(binTem2, "1");
		}
		else
		{
			strcat(binTem2, "0");
		}

	}
	char* p2 = strtok(binTem2,"#");
	printf("与运算结果是: %s \n",p2);
	//左移一位，判断是否计算结束。
	//int n = convertBinaryToDecimal(p);
	int p2num = atoi(p2);
	printf("--%d--",p2num);
	int tenum[10];
	for(int i = 0; i < strlen(p2); i++)
	{
		char te = p2[i]; //单个字符
		char tes[10];  //字符转字符串.使单个字符变成了字符串
		tes[0] = te;
		tes[1] = '\0';
		//printf("\n-%s\n", tes);
		tenum[i] = atoi(tes);  //单个字符串变成了数字。
		printf("...%d",tenum[i]);
		//printf("--%d--",atoi(te));

		p2[i] << 1;
		if (p2[i] == '1') 
		{
			judge = 1;
		}
		
	}
	//printf("数字是:%d",tenum);
	//二进制转16进制
	for (int i = 0; i < 4; i++)
	{
		tenum[i]*0
	}
	printf("左移一位结果是: %s\n",p2);
	if (judge == 1)
		printf("未计算完毕，进行下一轮计算\n");
		//printf("judge：%d--\n",judge);

	printf("\n进行第三次计算\n"); 

	return 0;
}