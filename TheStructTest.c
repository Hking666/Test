#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
#pragma pack(1)
typedef struct A
{
	int a;
	char b;
	double c;

}Date1;
typedef struct B
{
	int aa;
	char bb;
	double cc;
	double *ac;
	short arr[4];
	Date1 ;


}Date2;

int main( )
{
	printf("%d\n", sizeof(Date1));
	printf("%d\n", sizeof(Date2));
	system("pause");
	return 0;
}
