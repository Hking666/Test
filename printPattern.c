#include <stdio.h>
#include <windows.h>
int main()
{
	int i = 1;
	int j;
	for (; i <= 11; i = i + 2)
	{
			for (j = 1; j <= i; j++){

				printf("*");

			}
			printf("\n\n");
		
	}

	for (; i >=1; i -=  2) // 此时 i= 13
	{
		
			for (j = 1; j <= i; j++){

				printf("*");

			}
			printf("\n\n");
		
	
	}
	
	system("pause");

}
