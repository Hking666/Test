#include<stdio.h>
#include<windows.h>
#pragma warning (disable :4996)

int sumDigs(unsigned int n)
{
	if (n < 9){
	
		return n;
	
	}

	return (n % 10) +sumDigs(n / 10);

}
int main()
{
	unsigned int number ;
	scanf("%d",&number);
	int ret = sumDigs(number);
	printf("%d", ret);
	system("pause");
	return 0;
}
