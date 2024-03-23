#include<iostream>
using namespace std;

int main(void)
{
    int num;
    cin>>num;
    char *ptr=new char[num] {0};
    ptr[5]='a';
    for (int i = 0; i < num; i++)
    {
        cout<<ptr[i];   
    }
    
    
    delete ptr;
}