#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#pragma warning (disable : 4996)

int main()
{
	FILE * in, *out;
	char ch, infile[10], outfile[10];
	printf("输入读入文件的名字：");
	scanf("%s", infile);
	printf("输入输出文件的名字：");
	scanf("%s", outfile);
	if ((in = fopen(infile, "r")) == NULL)
	{
		printf("无法打开此文件\n");
		exit(0);
	}
	if ((out = fopen(outfile, "w")) == NULL)
	{
		printf("无法打开此文件\n");
		exit(0);
	}
	while (!feof(in))
	{
		ch = fgetc(in);
		fputc(ch, out);
		putchar(ch);
	}
	putchar(10);
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}
