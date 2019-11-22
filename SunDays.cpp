#include<iostream>
using namespace std;
bool judg(int year)
{
    if((0==year%4||0==year%400)&&0!=year%100)
    {
        return true;
    }
    return false;
}
void func(int year , int month , int days)
{
    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(judg(year))
    {
        arr[2] +=1;
    }
    int count = days;
    for(int i = 1; i<month;++i)
    {
        count +=arr[i];
    }
    cout<<count<<endl;
}
int main()
{
    int year ,  month ,  days;
    while(cin>>year)
    {
        cin>>month;
        cin>>days;
        func(year ,month ,days);
    }
    
    return 0;
}
