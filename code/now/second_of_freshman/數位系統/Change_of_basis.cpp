#include <iostream>
using namespace std;

inline void chang(int x, int y)
{
    int n;
    if (x < y)
    {
        switch (x)
        {
        case 10:
            cout << 'A';
            break;
        case 11:
            cout << 'B';
            break;
        case 12:
            cout << 'C';
            break;
        case 13:
            cout << 'D';
            break;
        case 14:
            cout << 'E';
            break;
        case 15:
            cout << 'F';
            break;
        default:
            cout << x;
            break;
        }
    }
    else
    {
        n = x / y;
        chang(n, y);
        switch (x % y)
        {
        case 10:
            cout << 'A';
            break;
        case 11:
            cout << 'B';
            break;
        case 12:
            cout << 'C';
            break;
        case 13:
            cout << 'D';
            break;
        case 14:
            cout << 'E';
            break;
        case 15:
            cout << 'F';
            break;
        default:
            cout << x % y;
            break;
        }
    }
}
int main()
{
    int x, y;
    cout << "X:";
    cin >> x;
    cout << "Y:";
    cin >> y;
    cout << "將X轉為基底為:" << y << endl
         << "結果:";
    chang(x, y);
    cout << "\n";
}