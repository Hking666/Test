#include<iostream>
using namespace std;
#include<vector>

int MoreThanHalfNum_Solution(vector<int> numbers) {

	int count = 0;
	int num = 0;
	int size = numbers.size();
	for (int i = 0; i < size; ++i)
	{
		if (0 == count)
		{
			num = numbers[i];
			count++;
		}
		else if (num == numbers[i])
		{
			count++;
		}
		else
		{
			count--;
		}

	}

	count = 0;
	for (int i = 0; i< size; ++i)
	{
		if (num == numbers[i])
			count++;
	}

	return count > size / 2 ? num : 0;
}

int main()
{

	vector<int> v;
	int n, num;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		v[i] = num;
	}
	cout<<MoreThanHalfNum_Solution(v)<<endl;
	return 0;
}
