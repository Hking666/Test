#include <stdio.h>
#include <windows.h>
#include <math.h >
#pragma warning (disable : 4996)
	
int FindNumber(int arr[] , int len){
	int number = 0;
	for (int i = 0; i < len; i++){
	
// 相同的数异或为0， 最终只剩下唯一单独的数
 
		number ^= arr[i];
	
	}
	return number;
}
 
int main(){
	int arr[] = {2,2,4,1,9,4,9,8,1};
 
	int len = sizeof(arr) / sizeof(arr[0]);
	int number = FindNumber( arr,  len);
	printf(" %d ", number);
	system("pause");
	return 0;
 
}
