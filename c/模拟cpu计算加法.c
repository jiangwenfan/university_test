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
	printf("�������������:%d �� %d\n",num1,num2);
	printf("\n---------------cpuģ��������-------------\n");
	printf("���ƽ��� %d ������ɼ���\n",sumTo);
	
	printf("������Ķ������� %s �� %s\n\n",binNum1,binNum2);
	printf("��һ�������������\n");
	int len1 = strlen(binNum1);
	//printf("%d",len1);
	//������������
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
	char* p = strtok(binTem, "#"); //p�Ǿ������������ֵ
	if(p != NULL)
	{
		char* p1 = p;
		printf("��������ֵ��:%s\n", p1);
	}

	printf("\n�ڶ�������������:\n");
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
	printf("����������: %s \n",p2);
	//����һλ���ж��Ƿ���������
	//int n = convertBinaryToDecimal(p);
	int p2num = atoi(p2);
	printf("--%d--",p2num);
	int tenum[10];
	for(int i = 0; i < strlen(p2); i++)
	{
		char te = p2[i]; //�����ַ�
		char tes[10];  //�ַ�ת�ַ���.ʹ�����ַ�������ַ���
		tes[0] = te;
		tes[1] = '\0';
		//printf("\n-%s\n", tes);
		tenum[i] = atoi(tes);  //�����ַ�����������֡�
		printf("...%d",tenum[i]);
		//printf("--%d--",atoi(te));

		p2[i] << 1;
		if (p2[i] == '1') 
		{
			judge = 1;
		}
		
	}
	//printf("������:%d",tenum);
	//������ת16����
	for (int i = 0; i < 4; i++)
	{
		tenum[i]*0
	}
	printf("����һλ�����: %s\n",p2);
	if (judge == 1)
		printf("δ������ϣ�������һ�ּ���\n");
		//printf("judge��%d--\n",judge);

	printf("\n���е����μ���\n"); 

	return 0;
}