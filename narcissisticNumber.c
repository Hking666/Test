
#include <stdio.h>
#include <windows.h>
int main()
{
	int i = 100;
	for (; i <= 999; i++)
	{
		int number = i;
		int a = number % 10;
		number = number / 10;
		int b = number % 10;
		int c = number / 10;


		if (a * a * a + b * b * b + c * c * c == i)
		{
			printf(" %d = %d ^ 3 + %d ^ 3 + %d ^ 3 \n", i, c, b, a);
		
		}
		
	
	}
	
	system("pause");

}
