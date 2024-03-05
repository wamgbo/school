#include <iostream>
using namespace std;

inline bool primeQ(int n) // 判斷質數
{
    int sum = 0;
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            sum++;
        }
    }
    if (sum != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main(void)
{
    int m, n;
    while (cin >> m >> n)
    {
        int sum = 0;
        for (int i = m; i <= n; i++)
        {
            if (primeQ(i))
            {
                sum++;
            }
        }
        cout << sum << '\n';
    }
}
