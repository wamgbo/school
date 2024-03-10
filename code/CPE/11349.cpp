#include <iostream>
#include <iomanip>

using namespace std;

void check(int num[], int n, bool result[], int index)
{

    for (int i = n * n - 1; i >= 0; i--)
    {
        if (num[i] < 0)
        {
            result[index] = 0;
            break;
        }
        else if (num[i] != num[n * n - 1 - i])
        {
            result[index] = 0;
            break;
        }
        else
        {
            result[index] = 1;
            break;
        }
    }
}

int main(void)
{
    int time, index = 0, n;
    bool sum[100];
    cin >> time;
    for (int i = 0; i < time; i++)
    {
        int matrix[1024] = {0};
        index = 0;
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
        if (sum[i] == 1)
            cout << "Test #" << i + 1 << ": Symmetric." << endl;
        else
            cout << "Test #" << i + 1 << ": Non-symmetric." << endl;
    }
}