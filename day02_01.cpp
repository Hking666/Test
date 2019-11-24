#include<iostream>
using namespace std;
#include<vector>

void Func(vector<int>&v,int n)
{
    int count = 0 ; 
    int i = 0;
    while(i<n)
    {
        if(v[i]<v[i+1])
        {
            while(i<n&&v[i]<=v[i+1])
            {
                i++;
            }
            count++;
            i++;
        }
        else if(v[i]==v[i+1])
        {
          
                i++;
        }
        else
        {
            while(i<n&&v[i]>=v[i+1])
            {
                i++;
            }
            count++;
            i++;
        }
    }
    cout<<count<<endl;
}
int main()
{
    int n =0;
    vector<int> v;
    while(cin>>n)
    {
        v.resize(n+1);
        v[n] = 0;
        for(int  i = 0 ; i<n;++i)
        {
            cin>>v[i];
        }
        
        Func(v,n);
        
    }
    
    
    
    return 0;
}
