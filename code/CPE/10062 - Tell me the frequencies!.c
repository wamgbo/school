#include <stdio.h>
#include <string.h>

typedef struct
{
    int num, word;
} data;

void sort(data num[])
{
    int k = 0;
    data temp;
    for (int i = 0; i < 128; i++)
    {
        for (int j = 0; j < 128 - i - 1; j++)
        {
            if (num[j].num > num[j + 1].num)
            {
                temp.word = num[j].word;
                temp.num = num[j].num;
                num[j].word = num[j + 1].word;
                num[j].num = num[j + 1].num;
                num[j + 1].word = temp.word;
                num[j + 1].num = temp.num;
            }
        }
    }

    // Fix the loop condition and use k instead of j
    while (num[k].num != 0)
    {
        if (num[k].num != 0)
        {
            printf("%d %d\n", num[k].num, num[k].word);
        }

        k++;
    }
}

int main()
{
    char word[1000];
    int num[128];
    data list[128];
    int k = 0;

    while (fgets(word, sizeof(word), stdin))
    {
        memset(num, 0, sizeof(num)); // Initialize num array
        for (int i = 0; i < strlen(word); i++)
        {
            num[word[i]]++; // Increment the count at the corresponding index
        }

        for (int j = 126; j >= 32; j--)
        {
            if (num[j] != 0)
            {
                list[k].word = j;
                list[k].num = num[j];
                k++; // Increment k after updating list array
            }
        }
        sort(list);
    }
    // Call the sort function to display the sorted result

    return 0;
}
