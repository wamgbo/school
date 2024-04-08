#include <iostream>
#include <iomanip>
using namespace std;

class Classa
{
protected:
    int numa, numb;

public:
    static int count;
    Classa(int a, int b)
    {
        numa = a;
        numb = b;
        count++;
    }
    Classa(const Classa &Classb)
    {
        int *ptr = new int;
        *ptr = Classb.count;
        numa = Classb.numa;
        numb = Classb.numb;
    }
    void show()
    {
        cout << numa << numb;
    }
};
class Classb : public Classa
{
private:
    int numc;

public:
    Classb(int a, int b, int c) : Classa(a, b)
    {
        numc = c;
        count++;
    }
    void show()
    {
        cout << numa<<" "<< numb <<" "<< numc;
    }
};
int Classa::count = 0;
int main()
{
    int a, b, c;
    cin >> a >> b >> c; // 設輸入10,20
    Classa test1(a, b);
    Classa test2 = test1;
    Classb test3(a, b, c);
    test3.show();                                    // 印出numa=10    numb=20    numc=30
    cout << "已建立物件數" << Classa::count << endl; // 印出3
    return 0;
}