#include<iostream>
using namespace std;
int main(void)
{
    int *num,num2=13;
    num=&num2;
    cout<<num<<' '<<*num<<' '<<&num2;
}