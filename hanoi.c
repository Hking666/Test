#include<stdio.h>
#include<windows.h>
#pragma warning ( disable:4996)

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{	
		// n == 1时，只剩下最后一块，只需将其 从 A移动到目的位置 C 上
		printf("%c——>%c\n",A,C);
	}
	else{
		

		//前 n-1 块需要移动到B，

		//在此过程中，需要先借助C位置，才能将 前n-1块 从A ——>B
		// A — C —>B , 从 A 借助C 移动到B
		hanoi(n-1, A, C, B); 
		printf("%c——>%c\n", A, C);

		// 将前n-1 块 ，从 A移动到 目的基座C ，
		//B — A —> C ，从 B 借助A 移动到C
		hanoi(n - 1, B, A, C);
			
	}


}
int main()
{
	
	int n = 0;
	printf("输入盘子个数：");
	scanf("%d", &n);
	hanoi(n,'A' , 'B', 'C');
	system("pause");

	return 0;
}
