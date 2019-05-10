#include<stdio.h>
#include<windows.h>
#pragma warning(disable : 4996)

void ShowString( ){
	char src_str[] = "#######################################";
	char dst_str[] = "***************************************";
	
	int right = strlen(src_str)-1;
	int left = 0;
	while ( left <= right){
		
		dst_str[left] = src_str[left];
		dst_str[right] = src_str[right];
		
		printf("%s\r", dst_str); // \r
		fflush(stdout); //  fflush 刷新为一行
		left++,right--;
		Sleep(500);
	}

	printf("\n");
}
int main()
{
	

	ShowString( );
	system("pause");
	return 0;
}
