#include<stdio.h>
#include<windows.h>
#include<errno.h>
#pragma warning(disable:4996)

int main()
{	
	int a = 10000;
	FILE * pf1 = fopen("test.txt", "wb");
	fwrite(&a, sizeof(int), 1, pf1);
	fclose(pf1);
	pf1 = NULL;


	fputc('c', stdout); // ���ַ�Ϊ��λ���'c'
	


	const char *msg = "hello world\n";
	fwrite(msg, strlen(msg), 1, stdout);  // ��hello world ��� ��  һ�н��ļ���������ꡢ��ʾ���� 

	
	FILE * pf2 = fopen("test.txt", "w");
	if (NULL == pf2)
	{
		printf("%d:%s", errno, strerror(errno)); // ��������ת��Ϊ����������
		return 1;
	}
	int pos = ftell(pf2);//�ļ�ָ���������ʼλ�õ�ƫ��������ÿ���±��൱�� �´�Ҫд���λ�ã����԰����������
	printf("pos :%d \n", pos); //0
	fputc('c', pf2);
	pos = ftell(pf2);
	printf("pos :%d \n", pos); //1

	fputc('c', pf2);
	pos = ftell(pf2);
	printf("pos :%d \n", pos); //2

	fputc('c', pf2);
	pos = ftell(pf2);
	printf("pos :%d \n", pos); //3

	fputc('c', pf2);
	pos = ftell(pf2);
	printf("pos :%d \n", pos); //4

	fputc('c', pf2);
	pos = ftell(pf2);
	printf("pos :%d \n", pos); //5

	fclose(pf2);
	
	FILE * pf3 = fopen("test.txt", "r");  //ֻ��
	if (NULL == pf2)
	{
		printf("%d:%s\n", errno, strerror(errno)); // ��������ת��Ϊ����������
		system("pause");
		return 1;
	}

	int c = fgetc(pf3);
	printf("%c\n", c); //���c;
	fclose(pf3);

	
	fputs("hello world!\n",stdout);   // ����ʾ����� hello world!
	FILE * pf4 = fopen("test1.txt", "w");
	if (NULL == pf2)
	{
		printf("%d:%s\n", errno, strerror(errno)); // ��������ת��Ϊ����������
		system("pause");
		return 1;
	}
	printf("pos:%d\n", ftell(pf4)); // �ļ�λ��0 
	// д��ʱ�����Զ���\nת��Ϊ \r\n ���Ի��һ���ַ�
	fputs("hello world!\n", pf4); // ���hello world! ���ļ�test1.txt��  hello world! \r\n (0��13 ��14���ַ�)
	printf("pos:%d\n", ftell(pf4)); // ָ���ļ���һ����д��λ��14
	fclose(pf4); 


	FILE * pf5 = fopen("test2.txt", "w");
	if (NULL == pf2)
	{
		printf("%d:%s\n", errno, strerror(errno)); // ��������ת��Ϊ����������
		system("pause");
		return 1;
	}
	printf("pos:%d\n", ftell(pf5)); // �ļ�λ��0 
	const char * str = "hello";  // �����ƽ� \0 תΪ 00  
	fwrite(str , strlen(str)+1,1,pf5);  // ���������� 
	printf("pos:%d\n", ftell(pf5)); // ָ���ļ���һ����д��λ��6
	fclose(pf5);


	FILE * pf6 = fopen("test3.txt", "w");
	if (NULL == pf2)
	{
		printf("%d:%s\n", errno, strerror(errno)); // ��������ת��Ϊ����������
		system("pause");
		return 1;
	}
	printf("pos:%d\n", ftell(pf6)); // �ļ�λ��0 
	
	fprintf(pf6, "hello world\n"); //���hello world ���ļ�test3.txt��
	fprintf(stdout, "hello world\n"); // ����Ļ��ӡhello world
	printf("pos:%d\n", ftell(pf6)); // ָ���ļ���һ����д��λ��6
	fclose(pf6);

	int x = 12345;
	char buf1[16];
	sprintf(buf1,"%d",x);  // ������ת��Ϊ�ַ�����buf��
	int i = 0;
	for (i; i < 16; i++)
	{
		printf("%c\n", buf1[i]);
	}

	int y = 0;
	char buf2[16] = "12345";
	sscanf(buf2, "%d", &y);
	for (i = 0; i < 16; i++)
	{
		printf("%d\n", y);
	} 
	system("pause");
	return 0;
}