#include<iostream>
using namespace std;
#include<string>

void func(string& s)
{
    int len = s.size();
    string res,cur;
    for(int  i = 0 ; i <= len ; ++i)
    {
        if(s[i] >= '0'&&s[i] <= '9')
        {
            cur += s[i]; 
        }
        else
        {
            if(cur.size()>res.size())
            {
                res = cur;
            }
            else
            {
                cur.clear();
            }
            
        }
        
    }
    
    cout<<res;
}
int main()
{
    string str,res,cur;
    while(getline(cin,str))
    {
        func(str);
    }
    return 0;
}
