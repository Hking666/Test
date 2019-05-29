#include<stdio.h>
#include<windows.h>
#pragma warning (disable : 4996)

int main(){

	int n = 0;
	scanf("%d", &n);
	
	int i = 1;
	int flag = -1;
	float s = 0;
	int t = 1;
	int j = 1;
	for (; i <= n; i++){
		t = 1;
		j = 1;
		for (; j <= (2 * i - 1); j++){

			t *= j;
						
		}
		
		flag = -flag;
		s += flag / (1.0*t);

	}

	printf("%f", s);
	system("pause");
	return 0;
}
