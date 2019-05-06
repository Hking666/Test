#pragma warning(disable : 4996)
#include <stdio.h>
#include <windows.h >
void Show( int n)
{
	int i = 1;
	for (; i <= n; i++){
		
		int j = 1;
		for (; j <= i; j++){


			printf(" %d + %d = %d " , i , j , i*j);

		}


		printf("\n");
	
	
	}


}
int main( )
{
	
	
	Show(9);
	
	system("pause");
	return 0;
}
