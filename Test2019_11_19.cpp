#include<iostream>
using namespace std;
#include<vector>
#include<math.h>
bool judg(long long n)
{
	long long max = sqrt(n);
	for (long long i = 2; i <= max; ++i)
	{
		if (0 == n%i)
		{
			return true;
		}
	}
	return false;
}
void func(long long n)
{
	long long Mid = n >> 1;
	long long left = Mid - 1;
	long long right = n - left;
	while (judg(left) || judg(right))
	{
		--left;
		++right;
	}

	cout << left << endl;
	cout << right << endl;
}
int main()
{
	long long n;
	while (cin >> n)
	{
		if (0 == n % 2 && n>2)
			func(n);
	}
	return 0;
}
