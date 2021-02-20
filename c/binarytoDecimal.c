#include <stdio.h>
#include <string.h>

int main()
{
	int numberbinary[] = { 1,0,1,0,0,1,1,0 };
	//int arrylength = strlen(numberbinary);
	int arrylength = 8;
	int sumdecimal = 0;
	int besthighbinary = arrylength - 1;
	int sum = 0;
	for (int i = 0; i < arrylength; i++)
	{
		int res = 0;
		while (besthighbinary != 0)
		{
			res = 2 * 2;
			besthighbinary = besthighbinary - 1;
		}
		
		sum = sum + numberbinary[i] + res;
		besthighbinary=besthighbinary-1;


	}
	printf("%d",sum);


	return 0;
}


