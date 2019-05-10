#include<stdio.h>
#include<windows.h>
#pragma wraning(disable : 4996)

int BinSearch(int a[],int num , int x){
	int left = 0;
	int right = num - 1;
	
      // 不要忽略 left 和 right 相等的情况，当所查找数位数组第一个或最后一个时，就会出现相等
	while (left <= right){

	   int  mid = (left + right) / 2;

		if (x > a[mid]){

			left = mid + 1; 
			
		}
		else if (x < a[mid]){

			right = mid - 1;
			
		}
		else{
			
			return mid;
		
		}


	}

	return -1;

}

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int num = sizeof(a) / sizeof(a[0]);
	
	printf("请输入一个数：");
	int x = 0;
	scanf("%d", &x);

	int res = BinSearch(a, num, x);

	printf("%d", res);
	system("pause");
	return 0;
}
