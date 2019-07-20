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
void swap(char * xp ,char *yp)
{
    // j+1 元素的地址
    // j 元素的地址
	int size = yp - xp;  // 求出两个元素地址相隔的字节数；

	while (size--)
	{
		*xp ^= *yp;
		*yp ^= *xp;
		*xp ^= *yp;

		xp++, yp++;
	}


}

void my_qsort(void*base, int num, int size, int(*compar)(const void*, const void*))
{ 
	//由于不知到类型，因此只能对元素一个字节一个字节进行交换

	int flag = 0;  
	int  i = 0;
	for (i; i < num-1; i++){  //  0... num-1 总共num个元素，最后一个元素 num-1 不需要查找
		int j = 0;
		for (j; j < (num-1)- i; j++) // 第 i个元素查找 (num-1)减去i次
		{
			flag = 0;
			if (compar((char*)base + size*j, (char*)base + size*(j + 1))> 0 )
			{	
				flag = !flag; // 若不执行次指令，则代表数组元素本身就已经排好序

				swap((char*)base + size*j, (char*)base + size*(j + 1)); //由于不知到类型，因此只能对元素一个字节一个字节进行交换

			}

			
		}
		
		if (0 == flag)  //此时直接跳出循环
		{
			break;
		}

	
	}
	

}
int main()
{
	int arr[] = { 1, 25, 6, 149, 654, 23, -12, 260, 6, - 127 };
	int size = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, size, sizeof(int), my_Copmar);
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}

	system("pause");
	return 0;

}
