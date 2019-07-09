#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int _add(int x, int y)
{
	return x + y;
}

int _sub(int x, int y)
{
	return x - y;
}

int _mul(int x, int y)
{
	return x * y;
	
}


int _div(int x, int y)
{
	if (!y){ // !y 即 y 不为 真
	
		printf(" mul zero !");
			return -1;
	}

	return x/y;
}


int _mod(int x, int y)
{
	if (!y){ // !y 即 y 不为 真

		printf(" mul zero !");
		return -1;
	}

	return x % y;
}

int quit(int x, int y)
{
	printf("exit...Done");
	exit(1);
	
}

void Menu()
{
	printf("************************************\n");
	printf("**** 1、add              2、sub ****\n");
	printf("**** 2、mul              4、div ****\n");
	printf("**** 5、mod              6、exit****\n");
	printf("************************************\n");
}
int main()
{
	int select = -1;
	char *op = " +-*/%";
	int(*p[6])(int, int) = { quit, _add, _sub, _mul, _div, _mod };
	while(1)
	{
		Menu();
		scanf("%d", &select);

		if (select >= 0 && select < 6)
		{
			if (select == 0)
			{
				p[0](-1, -1);
			}

			printf("请输入( x  y )>>>");
			int x, y;
			scanf("%d %d", &x, &y);

			int anser = p[select](x,y);
			printf("%d %c %d = %d \n" , x ,op[select],y,anser);
		}
		else
		{
			printf("select error!!!");
		}
		
	
	}
	system("pause");
	return 0;


}
