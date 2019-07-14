#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning (disable:4996)

int main()

{
	char str[] = "This is a simple string";
	char *pch;
	pch = strstr(str, "simple");
	strncpy(str,"simple",6);

	puts(str);
	system("pasue");
	return 0;

}
