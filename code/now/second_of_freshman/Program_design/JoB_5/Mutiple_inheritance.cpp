#include <iomanip>
#include <iostream>
using namespace std;
class human
{
private:
    string name;

public:
    void setName(string n) { name = n; }
    string getName() { return name; }
};
class Student:virtual public human
{
private:
    string name;

public:
    void learn() { cout << " Learn method " << endl; }
};
class Worker:virtual public human
{
private:
    string name;

public:
    void work() { cout << " Work method " << endl; }
};
class TeachingAssistant : public Student, public Worker
{
private:
    string name;    
};
int main()
{
    string name;
    getline(cin, name);
    TeachingAssistant ta;
    ta.setName(name);
    ta.learn();
    ta.work();
    cout << ta.getName() << endl;
    return 0;
}