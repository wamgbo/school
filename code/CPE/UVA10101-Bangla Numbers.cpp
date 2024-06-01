#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void fun(unsigned long long num)
{
    if (num>=10000000)//當愈到大於10000000會分割成n個部分
    {
        fun(num/10000000);//進入下一個遞迴
        cout<<" kuti";
        num%=10000000;
    }
    if (num>=100000)//當大於100000,num會=%100000的餘數，並直接掉到下面印出
    {
        fun(num/100000);
        cout<<" lakh";//印出字樣會剛好與下面的num配合
        num%=100000;
    }
    if (num>=1000)
    {
        fun(num/1000);
        cout<<" hajar";
        num%=1000;
    }
    if (num>=100)
    {
        fun(num/100);
        cout<<" shata";
        num%=100;
    }
    if(num)
    {
        cout<<" "<<num;//輸出除n的數字
    }
    
    
}
int main(void)
{
    unsigned long long num;
    int i=1;
    while (cin >> num)
    {
        cout<<setw(4)<<i<<'.';//記得
        if (num)//除非是0不然都會ture
            fun(num);
        else
            cout <<" 0";
        i++;
        cout<<endl;
    }
}
