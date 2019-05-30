#include<stdio.h>
#include<windows.h>

int my_strlen(const char *str)
{
	int count = 0;
	
	while (*str)//判断字符串是否结束, '\0'时结束
	{
		count++;
		str++;
	}
	return count;

}
int main()
{
	const char *p = "abcdef";
	int len = my_strlen(p);
	printf("%d",len);
	system("pause");
	return 0;

}
