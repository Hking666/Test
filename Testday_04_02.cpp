#include <iostream>
using namespace std;
#include <algorithm>
#include<string>
void func(int m,int n)
{
    string s , table = "0123456789ABCDEF";
    bool  flag = false; 
    if(m<0)
    {
        m = 0 - m;
        flag = true;
    }
    while(m)
    {
        s +=table[m%n];
        m /= n;
    }
    if(flag)
    {
        s +='-';
    }
    reverse(s.begin(), s.end());
    
    cout<<s<<endl;
}
int main()
{
    int m = 0 , n = 0;
    while(cin>>m>>n)
    {
        func(m,n);
    }
    return 0;
}
