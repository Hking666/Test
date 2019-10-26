#include<stdio.h>
#pragma warning (disable:4996)
int  main()
{
	int*p, m = 5, n;
	p = &n;
	scanf("%d", &p);

	p = &n;
	scanf("%d", *p);

	/*scanf("%d”,&n);
	*p=n;
*/
	int **pp = &n;
	p = &n;
	*p = m;
	return 0;

}
