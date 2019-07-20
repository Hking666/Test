#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#pragma warning (disable : 4996)

double my_add(double x, double y)
{
	return x + y;
}

double my_sub(double x, double y)
{
	return x - y;
}

double my_mul(double x, double y)
{
	return x * y;
}

double my_div(double x, double y)
{
	return x / y;

}

void menu()
{

	printf("*********************************\n");
	printf("*****1、add ********* 2、sub*****\n");
	printf("*****3、mul ********* 4、div*****\n");
	printf("*********************************\n");


}
int main()
{
	double x;
	double y;
	double ret = 0;
	int input = 0;
	
	while (1)
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入操作数：\n");
			scanf("%d %d", &x, &y);
			ret = my_add(x, y);
			break;
		case 2:
			printf("请输入操作数：\n");
			scanf("%d %d", &x, &y);
			ret = my_sub(x, y);
			break;
		case 3:
			printf("请输入操作数：\n");
			scanf("%d %d", &x, &y);
			ret = my_mul(x, y);
			break;
		case 4:
			printf("请输入操作数：\n");
			scanf("%d %d", &x, &y);
			ret = my_div(x, y);
			break;
		defult:
			printf("输入错误!!! 请重新输入：\n");
			break;
		}
		
		printf("ret = %d\n",ret);
	}
	
	system("pasue");
	return 0;
}
