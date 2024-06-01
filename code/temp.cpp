#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

 void fun(long long num)
{
    if(num>=10000000)
    {
        
        fun(num/10000000);
        cout<<" kuti";
        num%=10000000;
    }
    if(num>=100000)
    {
        
        fun(num/100000);
        cout<<" lakh";
        num%=100000;
    }
    if(num>=1000)
    {
        
        fun(num/1000);
        cout<<" hajar";
        num%=1000;
    }
    if(num>=100)
    {
        
        fun(num/100);
        cout<<" shata";
        num%=100;
    }
    if(num)
    {
        cout<<" "<<num;
    }
}
int main(void)
{
    long long num,sum[10000]={0};
    int i=0;
    while (cin>>num)
    {
        cout<<setw(4)<<i+1<<".";
        if(num)
            fun(num);
        else 
            cout<<" 0";
        sum[i]=num;   
        i++;
        cout<<endl;
    }
    
    
}