#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
void Reverse(string& s)
{
    reverse(s.begin(), s.end());
    auto start = s.begin();
    auto end = s.begin();
    while(end != s.end())
    {
        end++;
        if(*end==' ')
        {
            reverse(start , end);
            start = end+1;
        }
    }
    reverse(start , end);
    
    cout<<s<<endl;
}
    
int main()
{
    
    string str;
    while(getline(cin,str))
    {
        Reverse(str);
    }
    return 0;
}
