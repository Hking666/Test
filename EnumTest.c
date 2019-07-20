#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
enum Day 
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun // 此处的 ， 既可以加也可以不加

};

typedef enum color
{
	BLUE,
	GREEN,
	WHITE,
	BLACK,
	PINK,
	RED

}color_s;

int main()
{
	enum Day  d = Thur;
	printf("%d\n",d);

	color_s c = GREEN;
	c = 100;
	printf("%d\n", c);
	printf("********************\n");
	printf("%d\n", BLUE);
	printf("%d\n", GREEN);
	printf("%d\n", WHITE);
	printf("%d\n", BLACK);
	printf("%d\n", PINK);
	printf("%d\n", RED);

	system("pause");
	return 0;

}
