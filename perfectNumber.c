#include<stdio.h>
#include<windows.h>
#include<math.h>
#pragma warning (disable:4996)
#define MAX  1000
void empty(int arr[], int len){

	//如果想把数组的每一个元素全部设为0，则可以采用memset函数对数组操作
	//memset(arr, 0, sizeof(arr[0]) * size);

	memset(arr, 0, sizeof(arr[0]) * len);
	
}
int main(){


	int i = 2;
	int j, k, n;
	int count;
	int a[50];
	int len = sizeof(a) / sizeof(a[0]);
	for (i; i <= MAX; i++){

		k = 0;
		count = 0;
	
		for (j = 1; j < i; j++){

			if (0 == i%j){

				a[k] = j;
				count += j;
				k++;
			}
		}

		if (count == i){

			printf("%d its factors are ", i);
			for (n = 0; n < k; n++){

				printf("%d,", a[n]);
			
			}
			printf("\n");
		}

		empty(a,len);



	}
	system("pause");
	return 0;
}
