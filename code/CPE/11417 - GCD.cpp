#include <iostream>

using namespace std;
int gcd(int a, int b)
{
    int temp = 0;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(void)
{
    int num;
    while (cin >> num)
    {
        if (num == 0)
            break;
        int N = 10, G = 0;
        for (int i = 1; i < num; i++)
            for (int j = i + 1; j <= num; j++)
            {
                G += gcd(i, j);
            }
        cout << G << endl;
    }
}