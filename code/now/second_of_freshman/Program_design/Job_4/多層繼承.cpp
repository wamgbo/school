#include <iostream>
#include <iomanip>
using namespace std;
class A
{
private:
    int a;
public:
    A(int input)
    {
        a=input;
    }
    int geta()
    {
        return a;
    }
};
class B:public A
{
private:
    int b;
public:
    B(int input,int input_2):A(input)
    {
        b=input_2;
    }
    int getb()
    {
        return b;
    }
};
class C:public B
{
private:
    int c;
public:
    C(int input,int input_2,int input_3):B(input,input_2)
    {
        c=input_3;
    }
    int getc()
    {
        return c;
    }
};
class D:public C
{
private:
    int d;
public:
    D(int input,int input_2,int input_3,int input_4):C(input,input_2,input_3)
    {
        d=input_4;
    }
    int getd()
    {
        return d;
    }
    void showabcd()
    {
        cout<<geta()<<' '<<getb()<<' '<<getc()<<' '<<getd();
    }
};
int main(void)
{
    D test(5,6,7,8);
    test.showabcd();// 印出5 6 7 8
}