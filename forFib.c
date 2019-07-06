#include<stdio.h>
#include<windows.h>
#pragma warning (disable : 4996)

int fib(int n){

	int a = 1;
	int b = 1;
	int count = 0;
	if (1 == n || 2 == n)
	{

		return 1;
	}

	int  i = 3;
	for (i; i <= n; i++)
	{
		count = a + b;
		a = b;
		b = count;

	}

	return count ;

}

int main(){

	int n;
	scanf("%d",&n);
	int ret = fib(n);
	printf("%d", ret);
	system("pause");
	return 0;

}
