#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

#define SRC "C:\\Program Files\\Mozilla Firefox\\firefox.exe"
#define DST "C:\\Users\\��ƽ\\Desktop\\firefox-bak.exe"

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
	fseek(fp, 0, SEEK_END); // ���ļ�ָ�붨λ���ļ���β��
	int size = ftell(fp); // �����ļ�ָ���������ʼλ�õ�ƫ����
	rewind(fp);  //���ļ�λ�ûص���ʼλ��

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