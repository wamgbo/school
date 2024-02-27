#include<iostream>
using namespace std;

inline void fun(int num[],int r)
{
    int sum1,sum2,sum3;
    sum1=num[2]+num[5]+num[8];
    if(sum1>r)
        sum2++;
    sum1=num[2]+num[5]+num[8];

}
int main(){
    int num[9],r;
    char word='A';
    cout<<"r:";
    cin>>r;
    for (int i = 0; i < 9; i++)
    {
        cout<<word<<':';
        cin>>num[i];
        word+=1;
    }
    
}