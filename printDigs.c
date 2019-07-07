#include<stdio.h>
#include<windows.h>
#pragma warning (disable :4996)

void printDigs(unsigned int n)
{
	if (n > 9){
		
		printDigs(n / 10);
			
	}

    printf("%d\n",n%10) ;

}
int main()
{
	unsigned int number ;
	scanf("%d",&number);
	printDigs(number);
	system("pause");
	return 0;
}
