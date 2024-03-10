#include <iostream>
#include <iomanip>
using namespace std;

void BCD(int num);
inline void fun1(int num)
{
    if (num < 5)
    {
        BCD(num);
    }
    else
    {
        switch (num)
        {
        case 5:
            cout << "1011";
            break;
        case 6:
            cout << "1100";
            break;
        case 7:
            cout << "1101";
            break;
        case 8:
            cout << "1110";
            break;
        default:
            cout << "1111";
            break;
        }
    }
}
inline void fun2(int num)
{

    switch (num)
    {
    case 1:
        cout << "0111";
        break;
    case 2:
        cout << "0110";
        break;
    case 3:
        cout << "0101";
        break;
    case 4:
        cout << "0100";
        break;
    case 5:
        cout << "1011";
        break;
    case 6:
        cout << "1010";
        break;
    case 7:
        cout << "1001";
        break;
    case 8:
        cout << "1000";
        break;
    case 9:
        cout << "1111";
        break;
    default:
        cout << "0000";
        break;
    }
}
inline void BCD(int num)
{
    int output[4] = {0}, i = 0;
    while (num != 0)
    {
        output[i] = num % 2;
        num /= 2;
        i++;
    }
    for (int j = 3; j >= 0; j--)
    {
        cout << output[j];
    }
}
int main(void)
{
    int num1, count = 0, cut[4] = {0};
    cin >> num1;
    while (num1 > 0)
    {
        cut[count] = num1 % 10;
        num1 /= 10;
        count++;
    }
    cout << "BCD:";
    for (int i = count - 1; i >= 0; i--)
    {
        BCD(cut[i]);
        cout << ' ';
    }
    cout << endl;
    cout << "Excess-3:";
    for (int i = count - 1; i >= 0; i--)
    {
        BCD(cut[i] + 3);
        cout << ' ';
    }
    cout << endl;
    cout << "2421:";
    for (int i = count - 1; i >= 0; i--)
    {
        fun1(cut[i]);
        cout << ' ';
    }
    cout << endl;
    cout << "84-2-1:";
    for (int i = count - 1; i >= 0; i--)
    {
        fun2(cut[i]);
        cout << ' ';
    }
    cout << endl;
}