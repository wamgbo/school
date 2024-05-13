#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Employee
{
    string name;
public:
    static int num;
    Employee(string input)
    {
        name=input;
        num++;
    }
    virtual void getName()
    {
        cout<<name;
    }
    virtual int getSalary()
    {
        return 1;
    }
};
int Employee::num=0;
class Manager:public Employee
{
public:
    Manager(string input):Employee(input){}
    int getSalary()
    {
        return 40000;
    }
};
class Engineer:public Employee
{
public:
    Engineer(string input):Employee(input){}
    int getSalary()
    {
        return 35000;
    }
};
int main()
{
    Employee *array[10];
    Manager A("Terry");
    Engineer B("Sam");
    Engineer C("Mary");
    Engineer D("Helen");
    Manager E("John");
    array[0] = &A;
    array[1] = &B;
    array[2] = &C;
    array[3] = &D;
    array[4] = &E;
    for (int i = 0; i < Employee::num; i++)
    {
        array[i]->getName();
        cout << "\t";
        cout << array[i]->getSalary();
        cout << endl;
    }
    return 0;
}
