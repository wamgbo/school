#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(void)
{
    long long temp, temp2,sum;
    cin >> temp;
    for (int i = 1; i <= temp; i++)
    {
        long long input[1024] = {0};
        long long sum = 0;
        cin >> temp2;
        for (int j = 0; j < temp2; j++)
        {
            cin >> input[j];
        }
        for (int k = 0; k < temp2-1; k++)
        {
            sum += abs(input[k] - input[k + 1]);
        }
        cout << sum<<endl;
    }
    
}