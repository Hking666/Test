#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#pragma warning (disable : 4996)

int main()
{
	FILE * fp;
	char str[3][10], temp[10];
	int i, j, k, n=3;
	printf("Enter string ：\n");
	for (i = 0; i < n; i++)
	{
		gets(str[i]);
	}
	for (i = 0; i <= n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(str[k], str[j])>0) 
				k = j;
		}
		if (k != i)
		{
			strcmp(temp,str[i]);
			strcmp(temp, str[k]);
			strcmp(str[k],temp );
		}
	}
	if ((fp = fopen("D:\CC\\string.dat","W"))==NULL)
	{
		printf("can't open file!\n");
		exit(0);

	}
	printf("\nThe new sequence:\n");
	for (i = 0; i < n; i++)
	{
		fputs(str[i],fp);
		fputs("\n", fp);
		printf("%s\n",str[i]);
	}
	system("pause");
	return 0;
}
