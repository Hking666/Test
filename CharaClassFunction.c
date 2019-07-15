#include<stdio.h>
#include<windows.h>
#include<ctype.h>
#pragma warning (disable : 4996)

int main()
{

	int i = 0;
	char a[] = "this1 is2 A good3 boy4!";
	char c;
	while (a[i])
	{
		if (isalpha(a[i]))
		{
			if (islower(a[i]))
			{

				c = toupper(a[i]);
			
			}
			else
			{
				c = a[i];
			

			}
				putchar(c);
		}
	
		i++;
	}
	system("pause");
	return 0;
}
