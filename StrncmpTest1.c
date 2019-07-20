include<stdio.h>
#include<windows.h>
#include<string.h>
#pragma warning(disable :4996)

int main()
{
	char *str[] = { "R2D2", "C3PO", "R2A6" };  //指针数组
	puts("Looking for R2 astromech droids...");
	int i = 0;
	for (i; i < 3; i++)
	{
		if (strncmp(str[i], "R2XX", 2 ) == 0)
		{
			printf("found %s\n", str[i]); // *(str+i)
		}
	}

	system("pasue");
	return 0;

}
