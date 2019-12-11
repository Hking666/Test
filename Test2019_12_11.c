#include<stdio.h>
#include<windows.h>
void rotate(int* nums, int numsSize, int k){

	int cur = 0;
	int bef = numsSize - k - 1;
	int dst = numsSize - k;
	int after = numsSize - 1;
	while (cur <= bef)
	{
		nums[cur] ^= nums[bef];
		nums[bef] ^= nums[cur];
		nums[cur] ^= nums[bef];
		cur++;
		bef--;

	}

	while (dst = after)
	{
		nums[dst] ^= nums[after];
		nums[after] ^= nums[dst];
		nums[dst] ^= nums[after];

		dst++;
		after--;
	}

	int i = 0;
	int j = numsSize - 1;
	while (i != j)
	{
		nums[i] ^= nums[j];
		nums[j] ^= nums[i];
		nums[i] ^= nums[j];
		i++;
		j--;
	}
}

int main()
{
	int nums[5] = { 1, 2, 3, 4, 5 };
	rotate(nums, 5, 3);
	system("pause");
	return 0;
}
