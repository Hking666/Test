#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
long long func(vector<int>& v , int n)
{
    sort(v.begin(),v.end());
    long long sum = 0;
    for (int i = n; i < 3 * n - 1; i += 2) 
    {
        sum +=v[i];
    }
    return sum;
}
int main()
{
    int n = 0; 
    vector<int> a;
    while(cin>>n)
    {
        a.resize(3*n);
        for(int i = 0 ; i < 3*n ; ++i)
        {
            cin>>a[i];
        }
        
    }
    
    cout << func(a,n) << endl;

}
