#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int n, m;
bool LESS(int x, int y)
{
    int xodd = abs(x % 2);
    int yodd = abs(y % 2);
    if (x % m != y % m)
        return x % m < y % m;
    if (xodd != yodd)
        return xodd;
    if (xodd)
        return x > y;
    return x < y;
}
int main(void)
{

    while (cin >> n>> m)
    {
        int num[10000] = {0};
        cout<<n<<" "<<m<<endl;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        sort(num, num + n, LESS);
        for (int i = 0; i < n; i++)
        {
            cout << num[i]<<endl;
        }
    }
}