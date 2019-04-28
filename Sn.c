#pragma warning (disable :4996)
#include <stdio.h>
#include <windows.h>

int add( int n){
	int num = 0;
	int multip = 0;
	int number = 0;
	for (int i = 0; i <= 5; i++){

		number = number * multip + n;

		multip = 10;

		num += number;
	
	}

	return num;
}
int main()
{
	int n;
	printf("请输入一个数：");
	scanf("%d", &n);
	int Sn = add( n );
	printf("%d", Sn);
	system("pause");
	return 0;
	

}
