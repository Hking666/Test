
#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
void init(int arr[] , int len){

	int i = 0;
	for (i; i < len; i++){
	
		arr[i] = i;
	
	}

	printf("对数组初始化\n");


}

void reverse(int arr[], int len){

	int start = 0;
	int end= len - 1;
	for (start; start <= len / 2; start++, end--){
	
		arr[start] ^= arr[end];
		arr[end] ^= arr[start];
		arr[start] ^= arr[end];
	
	}

	printf("对数组逆置\n");
	
	

}
void empty(int arr[], int len){

	  //如果想把数组的每一个元素全部设为0，则可以采用memset函数对数组操作
	   //memset(arr, 0, sizeof(arr[0]) * size);
	  
		memset(arr, 0, sizeof(arr[0]) * len);
		printf("对数组清空\n");
}

void printArr(int arr[], int len){

	int i = 0;
	for (i; i < len; i++){
	
		printf("%d",arr[i]);
	
	}
	printf("\n");

}
int main(){

	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);

	init(arr , len);
	printArr(arr, len);
	reverse(arr ,len);
	printArr(arr, len);
	empty(arr, len);
	printArr(arr, len);

	system("pause"); 
	return 0;
}
