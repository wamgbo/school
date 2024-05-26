#include <iostream>
#include <math.h>
using namespace std;

void re(int num, int &renum)
{
    int length = to_string(num).length();//to_string(num)變成sting
    while (length--)
    {
        renum += (num % 10) * pow(10, length);
        num /= 10;
    }
}
int prime(int num)
{
    bool flag = true;
    if (num <= 1)
        return 0;
    else if (num >= 2 && num <= 3)
        return 1;
    else
    {
        for (int i = 2; i < num; i++)
            if (num % i == 0)
                flag = false;
        return flag;
    }
}
int main(void)
{
    int num, renum = 0;
    while (cin >> num)
    {
        renum = 0;
        re(num, renum);
        if (prime(num) && prime(renum) && num != renum)
            cout << num << " is emirp." << endl;
        else if (prime(num))
            cout << num << " is prime." << endl;
        else
            cout << num << " is not prime." << endl;
    }
}