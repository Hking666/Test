#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

#define a 4
int main()
{
	int i, j, k,fMax;
	int flag = 1;
	int Max = 0;

	int arr[a][a] = { 0 };
	
	
	for (i= 0; i < a;i++)
	{
		
		for (j = 0; j < a; j++)
		{
			scanf("%d", &arr[i][j]);
		}

	}


	for (i = 0; i < a; i++)
	{
		flag = 1;
		Max = 0;
		for (j = 0; j < a; j++)
		{
			if (arr[i][j] > Max)
			{
				Max = arr[i][j];
				fMax = j;
			}

		}


		for (k = 0; k<a; k++)
		{
			if (Max > arr[k][fMax])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d %d", i, fMax);
			break;
		}
	
	}
	if (flag == 0)
	{
		printf("鞍点不存在！！！");
	}
	system("pause");
	return 0;
}
