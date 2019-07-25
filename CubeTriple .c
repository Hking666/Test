#include <stdio.h>

int main()
{
	int N;
	int a, b, c, d;
	scanf("%d", &N);
	for (a = 2; a <= N; a++){
		for (b = 2; b <= a - 1; b++){
			for (c = b; c <= a - 1; c++){
				for (d = c; d <= a - 1; d++){
					if (a*a*a == b*b*b + c*c*c + d*d*d){
						printf("Cube = %d, Triple = (%d, %d, %d)\n", a, b, c, d);
					}
				}
			}
		}
	}
	return 0;
}
