#include<stdio.h>
#include<stdlib.h>


void func(char (*arr)[5], size_t len)
{

	for (size_t i = 0; i < len; i++)
	{
		printf("%s ", arr[i]);
	}

}
int main()
{
	char arr[][5] = { "aaaa", "bbbb", "cccc" };
	size_t len = sizeof(arr) / sizeof(arr[0]);

	

	func( arr , len);
	system("pause");
	return 0;
}