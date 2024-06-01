#include <iostream>
#include <math.h>
using namespace std;
void sort(int result[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (result[j] > result[j + 1])
            {
                temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
}
int middle(int result[], int size)
{
    if (size % 2 == 0)
        return (result[size / 2] + result[size / 2 - 1]) / 2;
    else
        return result[size / 2];
}
int main(void)
{
    int num, time, result[1024] = {0};
    cin >> num;
    for (int z = 0; z < num; z++)
    {
        int input[1024] = {0}, sum = 0;
        cin >> time;
        for (int i = 0; i < time; i++)
        {
            cin >> input[i];
        }
        sort(input, time);
        int mid = middle(input, time);
        for (int j = 0; j < time; j++)
        {
            sum += abs(mid - input[j]);
        }
        cout << sum<<endl;
    }
}