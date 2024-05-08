#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int fun(int num)
{
    bool flag = 0;
    if (num >= 2 && num <= 3)
        return 1;
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
            flag = 1;
    }
    if (flag)
        return 0;
    else
        return 1;
}
int main(void)
{
    int num, du_num, temp, sum = 0, count = 0;

    while (cin >> num)
    {
        cout << num;
        temp = num;
        sum = 0;
        while (temp != 0)
        {
            du_num = temp % 10;
            sum = sum * 10 + du_num;
            temp /= 10;
        }

        if (fun(num))
        {
            if (sum == num)
            {
                cout << " is prime.";
            }
            else if (fun(sum))
                cout << " is emirp.";
            else
                cout << " is prime.";
        }
        else
        {
            cout << " is not prime.";
        }
        cout << endl;
    }
}