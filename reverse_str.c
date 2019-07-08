#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#pragma warning (disable : 4996)

void reverse_str(char * string)
{
	if (*string != '\0')
	{
	
		reverse_str(string+1);
	}
	string--;
	printf("%c", *string);
}
int main()
{
	char * str = "abcdefg";
	reverse_str(str);
	system("pause");
	return 0;
}
