#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

#define SRC "C:\\Program Files\\Mozilla Firefox\\firefox.exe"
#define DST "C:\\Users\\黄平\\Desktop\\firefox-bak.exe"

int main() 
{
	FILE * fp = fopen(SRC,"rb");
	if ( NULL == fp)
	{
		printf("open error!\n"); 
		return 1;
	}
	FILE * out = fopen(DST, "wb");
	if (NULL == fp)
	{
		printf("open error!\n");
		return 2;
	}
	fseek(fp, 0, SEEK_END); // 将文件指针定位到文件结尾，
	int size = ftell(fp); // 返回文件指针相对与起始位置的偏移量
	rewind(fp);  //让文件位置回到起始位置

	char * temp = (char *)malloc(size);
	fread(temp ,size,1,fp);
	fwrite(temp, size, 1, out);

	fclose(fp);
	fclose(out);
	//fp = NULL;
	//out = NULL;
	system("pause"); 
	return 0;
}