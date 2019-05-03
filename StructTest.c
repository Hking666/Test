#include <stdio.h>
struct  Stu
	{
		char name[20];
		int age;
		char sex[5];
		double height;


	};
int main()
{

	
	

	struct Stu tom = { "tom" , 15 , "m" , 180.1 };
	struct Stu *p = &tom;

	printf("name=%s , age=%d , sex=%s ， heigh=%lf", tom.name, tom.age, tom.sex ,tom.height);

	printf("\n name=%s , age=%d , sex=%s , heigh=%lf", p->name, p->age, p->sex , p->height);

	system("pause");

}
