#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int g_a; // 全局变量—— bss段 
int g_a = 10;
int main()
{

	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d %d\n", *p,a);
	printf("%d\n",g_a);
	system("pause");
	return 0;
}