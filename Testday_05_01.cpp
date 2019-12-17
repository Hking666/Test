#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
bool  IsCircleText(string& rs)
{
    int start = 0;
    int end = rs.size() - 1;
    
    while(start <= end)
    {
        if(rs[start] != rs[end])
            return false;
        end--;
        start++;
    }
    return true;
}

void func(string& s1 , string& s2)
{
    int size1 = s1.size();
    int size2 = s2.size();
    int count=0;
    string s;
    s +=s2;
    s +=s1;
    if(IsCircleText( s ))
    {
        count++;
    }
    
    for(int i = 0 ; i < size1 ; ++i)
    {
        s = s1;
        s.insert(i,s2);
        if( IsCircleText( s ))
        {
               count++;
        }
        s.clear();
    }
    cout<<count<<endl;
}
int  main()
{
    string s1;
    string s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        func(s1,s2);
    }
    
    return 0;
}
