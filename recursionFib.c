#include<stdio.h>
#include<windows.h>
#pragma warning (disable : 4996)

int fib(int n){


	if (n <= 2){

		return 1;
	}

		
	return fib(n - 1) + fib(n - 2);

}
int main(){

	int  n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d",ret);
	system("pause");
	return 0;

}
