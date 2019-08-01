#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#pragma warning (disable:4996)

void GetMemory(char**p, int num)
{
	*p = (char*)malloc(num);
	
}

int main()
{
	char *str = NULL;
	GetMemory(&str, 100);
	strcpy(str,"Hello");
	printf("%s", str);

	system("pause");
	return 0;
 }
