#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int middle(int num[], int LEN)
{
    if (LEN % 2 == 0)
        return (num[LEN / 2] + num[LEN / 2 - 1]) / 2;
    else
        return num[LEN / 2];
}
int main(void)
{
    int num, input_time, input[10000], sum;
    cin>>num>>sum;
    cout<<temp(num,sum);

    while (num--)
    {
        sum=0;
        cin >> input_time;
        for (int i = 0; i < input_time; i++)
        {
            cin >> input[i];
        }
        sort(input, input + input_time);
        int line = middle(input, input_time);
        for (int i = 0; i < input_time; i++)
        {
            sum += abs(input[i] - line);
        }
        cout << sum << endl;
    }
}

