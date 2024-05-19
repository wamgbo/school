#include <iostream>
#include <cstdlib>
using namespace std;
template <class T>
T exchange(T &a, T &b)
{
    T temp;
    temp=a;
    a = b;
    b = temp;
    return 1;
}

int main()
{
    int a = 2, b = 3;
    exchange<int>(a, b);
    cout << "after exchange: a=" << a << ",b=" << b << endl; // 輸出 after exchange: a=3,b=2
    double c = 3.5, d = 6.34;
    exchange<double>(c, d);
    cout << "after exchange: c=" << c << ",d=" << d << endl; // 輸出 after exchange: c=6.34,d=3.5
    system("pause");
    return 0;
}
