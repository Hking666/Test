#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#pragma warning (disable : 4996)

int main()
{
	FILE * fp;
	char ch, filename[10];
	printf("请输入所需用的文件：");
	scanf("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("无法打开此文件\n");
		exit(0);
	}
	ch = getchar();
	printf("输入字符串（以#结束）：");
	ch = getchar();
	while (ch != '#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	putchar(10);
	system("pause");
	return 0;
}
