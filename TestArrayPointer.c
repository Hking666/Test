#include<stdio.h>
#include<windows.h>
#pragma warning (disable ; 4996)

int main()
{

	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	system("pause");
	return 0;
}
