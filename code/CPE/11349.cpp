#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
void check(int num[], int n, bool result[], int index)
{
    int sum = 0;
    for (int i = n * n - 1; i >= 0; i--)
    {
        if (num[i] != num[n * n - 1 - i])
            sum++;
    }
    if (sum != 0)
        result[index] = 0;
    else
        result[index] = 1;
}

int main(void)
{
    int time, index = 0, n;
    bool sum[100];
    cin >> time;
    for (int i = 0; i < time; i++)
    {
        int matrix[1024] = {0};
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[index + j];
            }
            index += n;
        }
        check(matrix, n, sum, i);
    }
    for (int i = 0; i < time; i++)
    {
        if (sum[i]==1)
            cout << "Test #" << i + 1 << ": Symmetric." << endl;
        else
            cout << "Test #" << i + 1 << ": Non-symmetric." << endl;
    }
}