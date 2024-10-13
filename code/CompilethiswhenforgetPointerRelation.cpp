#include<iostream>
using namespace std;
int main(void)
{
    int array[4][4];
    int *num,num2=13;
    num=&num2;
    int *ar1=&array[0][0];
    int *ar2=&array[0][3];
    cout<<&array[0][0]<<endl<<&array[0][4]<<&array[2][4];
    //cout<<num<<endl<<' '<<*num<<endl<<' '<<&num2<<endl;
}
