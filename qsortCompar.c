#include<stdio.h>
#include<windows.h>
#pragma warning (disable :4996)

int my_Copmar(const void *xp, const void*yp)
{
	int * _xp = (int *)xp;
	int * _yp = (int *)yp;
	if (*_xp > *_yp)
	{
		return 1;
	}
	else if (*_xp < *_yp)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int arr[] = { 1, 25, 6, 149, 654, 23, -12, 260, 6, - 127 };
	int size = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, size, sizeof(int), my_Copmar);
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}

	system("pause");
	return 0;

}
