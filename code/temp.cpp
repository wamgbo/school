#include<iostream>
#include<iomanip>
using namespace std;

class A
{
public:
    void fun()
    {
        cout<<"dwa";
    }
};
class B :virtual public A
{

};
class B_
{
private:
    A test;
public:
    B_():test(){}
    
};
class C: virtual public A
{

};
class d:public B_,public C
{

};
int main(void)
{
    d dd;
    dd.fun();
}