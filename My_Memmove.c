#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
void *My_Memcpy(void * dst, const void *src, int num)
{

	char* src_ = (char*)src;
	char* dst_ = (char*)dst;
	if (dst_>src_ && dst < src_ + num )
	{
		dst_ = dst_ + num - 1;
		src_ = src_ + num - 1;
		while (num--)
		{
			*dst_ = *src_;
			src_--, dst_--;


		}
	}
	else
	{
		while (num--)
		{
			*dst_ = *src_;
			src_++, dst_++;
		

		}

	
	}
	
	return dst;
}
int main()
{
	//const char * a = "Hello!";
	char arr[16] = "Hello!";
	My_Memcpy(arr+2, arr, strlen(arr) + 1);
	int i = 0;
	for (i; i <16; i++)
	{
		printf("%c", arr[i]);
	}
	system("pause");
	return 0;

}
