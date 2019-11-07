#include<stdio.h>
#pragma warning (disable:4996)

void Sum(int n)
{
	
		int arr1[5] = { 0 };
		int count = 0;
		int number = 0;
		if (n > 45)
		{

			for (int i = 1; i <= 9; ++i)
			{
				arr1[0] = arr1[4] = i;
				for (int j = 0; j <= 9; ++j)
				{
					arr1[1] = arr1[3] = j;
					count = n - (arr1[0] + arr1[4] + arr1[1] + arr1[3]);
					if (count >= 0 && count <= 9)
					{
						arr1[2] = count;
						number = arr1[0] * 10000 + arr1[1] * 1000 + arr1[2] * 100 + arr1[3] * 10 + arr1[4];

						printf("%d\n", number);
					}
				}
			}
		}

	if (n % 2 == 0)
	{
		int arr2[6] = { 0 };
		int count = 0;
		int number = 0;
		for (int i = 1; i <= 9; ++i)
		{
			arr2[0] = arr2[5] = i;
			for (int j = 0; j <=9; ++j)
			{
				arr2[1] = arr2[4] = j;
				count = n - (arr2[0] + arr2[1] + arr2[4] + arr2[5]);
				if (count >= 0 && count <= 18 && count % 2 == 0)
				{
					arr2[2] = arr2[3] = count / 2;
					number = arr2[0] * 100000 + arr2[1] * 10000 + arr2[2] * 1000 + arr2[3] * 100 + arr2[4] * 10 + arr2[5];

					printf("%d\n", number);
				}
			}
		}
	}

}

int main()
{
	while (1)
	{
		int n;
		scanf("%d", &n);
		Sum(n);

	}
	return 0;
}
