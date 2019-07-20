#include<stdio.h>
#include<windows.h>
#pragma warning (disable : 4996)

int main(){

	int n = 0;
	scanf("%d", &n);
	int sign = 1;
	float denom =1.0;
	
	int i = 2 ;
	float sum = 0;
	if (1 == n ){
	
		sum = 1;

		printf("%f", sum);
	}
	else if (n > 1){
		for (i; i <= n; i++){
		
		
		sign = -sign;

		denom *= (2 * i - 2)*(2 * i - 1);
		
		 sum += sign / denom;
		 
		
	}
		 printf("%f", sum+1);
	
	}
	else{
	
		printf("错误！！！");
	}

	system("pause");
	return 0;

}
