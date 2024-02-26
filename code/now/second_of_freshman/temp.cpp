#include<iostream>
#include<iomanip>
using namespace std;

inline double F(int num)
{
    return 1.8*num+32;
}
inline double C(int num)
{
    return (num-32)/1.8;
}
int main() 
{
    double num;
    cin>>num;
    cout<<setprecision(2)<<fixed<<F(num)<<"\n";
}
