#include <iostream>
using namespace std;
int swap(int arr[], int &length)
{
    int sum = 0, temp;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sum++;
            }
        }
    }
    return sum;
}
int main(void)
{
    int N, length;
    cin >> N;
    while (N != 0)
    {
        cin >> length;
        int *arr = new int[length];
        for (int i = 0; i < length; i++)
        {
            cin >> arr[i];
        }
        cout << "Optimal train swapping takes " << swap(arr, length) <<" swaps." << endl;
        delete[] arr;
        N--;
    }
}