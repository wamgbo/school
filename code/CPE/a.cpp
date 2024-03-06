#include <iostream>
#include <iomanip>
using namespace std;
void fun(bool time[])
{
    time[0]=1;
    time[1]=0;
    time[2]=1;
}

int main(void)
{
    int num[1024];
    bool time[100];
    fun(time);
    int n=2;
    int result[128]={1,2,3,4};
    for (int i = n * n - 1; i >= 0; i--)
    {
        cout<<setw(2)<<result[n*n-1-i];
        cout<<setw(2)<<result[i];
    }
    
    
}