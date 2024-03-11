#include <iostream>
#include <cmath>
using namespace std;

inline void btod(int num, int time, int &dex)
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += (num % 10) * pow(2, i);
        num /= 10;
    }
    dex = sum;
}
void dtob(int num)
{
    if (num/2<=0)
    {
        cout << num;
    }
    else
    {
        dtob(num/2);
        cout << num%2;
    }
    
}
int main(void)
{
    int time = 4, num[4] = {0}, num1[4] = {0}, dex[4] = {0}, dex1[4] = {0}, sum1 = 0, sum2 = 0;
    cout << "第一位BCD:";
    for (int i = time - 1; i >= 0; i--)
    {
        cin >> num[i];
    }
    cout << "第二位BCD:";
    for (int i = time - 1; i >= 0; i--)
    {
        cin >> num1[i];
    }
    for (int i = 0; i < time; i++)
    {
        btod(num[i], time, dex[i]);
        btod(num1[i], time, dex1[i]);
    }
    for (int i = time; i > 0; i--)
    {
        sum1 += dex[i - 1] * pow(10, i - 1);
        sum2 += dex1[i - 1] * pow(10, i - 1);
    }
    cout<<"相加結果:";
    dtob(sum1+sum2);
    cout << endl;
}