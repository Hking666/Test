#include<iostream>
using namespace std;
#include<string>

string func(string&s1, string s2)
{
    string ret;
    size_t size1 = s1.size();
    size_t size2 = s2.size();
    int hashtable[256]={0};
    for(size_t i = 0 ; i<size2;++i)
    {
        hashtable[s2[i]]++;
    }
    
    for(size_t i = 0 ; i< size1;++i)
    {
        if(hashtable[s1[i]]==0)
        {
            ret.push_back(s1[i]);
        }
    }
    
    
    return ret;
}
int main()
{
    string str1;
    string str2;
    while(getline(cin,str1))
    {
        getline(cin,str2);
        
        cout<<func(str1,str2)<<endl;
    }
    
    return 0;
}
