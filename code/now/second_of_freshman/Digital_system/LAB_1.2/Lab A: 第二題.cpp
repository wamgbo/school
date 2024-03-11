#include <iostream>
#include <cmath>
using namespace std;

inline void binarytodex(int num, int time, int &dex)
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += (num % 10) * pow(2, i);
        num /= 10;
    }
    dex = sum;
}
int main(void)
{
    int time, num[4]={0}, num1[4]={0}, dex[4]={0}, dex1[4]={0}, sum1 = 0, sum2 = 0;
    cout << "位元運算";
    cin >> time;
    cout << "第一位BCD:";
    for (int i = 0; i < time; i++)
    {
        cin >> num[i];
    }
    cout << "第二位BCD:";
    for (int i = 0; i < time; i++)
    {
        cin >> num1[i];
    }
    for (int i = 0; i < time; i++)
    {
        binarytodex(num[i], time, dex[i]);
        binarytodex(num1[i], time, dex1[i]);
    }
    for (int i = time; i > 0; i--)
    {
        sum1 += dex[i - 1] * pow(10, i - 1);
        sum2 += dex1[i - 1] * pow(10, i - 1);
    }
    cout << sum1+sum2 << endl;
}