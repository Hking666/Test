#include"Mine.h"

int main()
{
	int key = 1;
	int menu = 0;
	while (key)
	{
		printf("#######################\n");
		printf("###1 play   2 excit ###\n");
		printf("#######################\n");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1:
			play();
			break;
		case 2:
			key = 0;
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	}
	system("pause");
	return 0;
}
