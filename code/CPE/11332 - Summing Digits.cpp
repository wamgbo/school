#include <iostream>
#include <iomanip>
using namespace std;

int fun(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main(void)
{
    int num, sum;
    while (1)
    {
        cin >> num;
        if (num == 0)
            break;
        sum = fun(num);
        while ((sum / 10) != 0)
            sum = fun(sum);
        cout << sum << endl;
    }
}