#include <iostream>
#include <math.h>
using namespace std;
int jolly_jumper(int num[], int size)
{
    int sum = 0,i=0;
    while (i<size-1)
    {
        sum+=abs(num[i]-num[i+1]);
        sum-=i+1;
        i++;
    }
    if (sum)
        return 0;
    else
        return 1;
}
int main(void)
{
    int frequency, i = 0;
    while (cin >> frequency)
    {
        int *arr = new int[frequency];
        for (int i = 0; i < frequency; i++)
        {
            cin >> arr[i];
        }
        if (jolly_jumper(arr, frequency))
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
        delete[] arr;
    }
}