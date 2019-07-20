#include<stdio.h>
#include<windows.h>
#pragma warning (disable : 4996)

int kTh_Power(int n , int k){

	if (0 == k){
	
		return 1;

	}
	return n * kTh_Power(n, k - 1);
}

int main(){

	int n,k;
	scanf("%d %d", &n, &k);
	int ret = kTh_Power( n, k);
	printf("%d", ret);
	system("pause");
	return 0;

}
