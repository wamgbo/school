#include<stdio.h>
int bubbleSort(int array[], int n)
{
    bool swapped = true;
    int j = 0;
    int temp,count=0;

    while (swapped)
    {
        swapped = false;
        j++;//當j加到等於n時，不會執行for也不會執行swapped = true;
        for (int i = 0; i < n - j; ++i)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
                count++;
            }
        }
    }
    return count;
}
int main() {
    int time,num,array[100];
    scanf("%d", &time);
    for (int i = 0; i < time; i++)
    {
        scanf("%d", &num);
        for (int j = 0; j < num; j++) {
            scanf("%d", &array[j]);
            
        }
        printf("Optimal train swapping takes %d swaps.\n", bubbleSort(array, num));

    }
}