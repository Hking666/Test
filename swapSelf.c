#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
int swap( int number){
	
	int n1 = number & 0xaaaaaaaa;//奇数位

	
	int n2 = number & 0x55555555;//偶数位

	n1 = n1 >> 1;//奇数位右移
	n2 = n2 << 1;//偶数左位移

	number = n1^n2;

	return number;
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	int number = swap(n);
	printf("%d",number);
	system("pause");
	return 0;

}
