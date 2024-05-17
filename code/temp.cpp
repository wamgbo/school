#include<iostream>
#include<cstdlib>
using namespace std;
template <class T> 
T add(T a,T b)
{
    return a+b;
}
int main(void)
{
    cout<<add<int>(3,4)<<endl<<add<double>(3.4,5.313);
}