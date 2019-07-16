#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
static int j;
void fun1()
{
	static int i = 0;
	i++;
	printf("%d\n",i);
}

void fun2()
{
	j = 0;  
	j++;
    printf("%d\n",  j);
}
int main()
{
	int k;
	for (k = 0; k < 10; k++)
	{
		for (k = 0; k < 10; k++)
		{
			fun1();
			printf("********************\n");
			fun2();
		}
	}
	
	system("pause");
	return 0;

}
