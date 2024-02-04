#include <stdio.h>
#include <stdlib.h>
//數列越來越大 還有任意兩數相加不等於其他兩數相加
int fun(int num[], int time)
{
    int count = 0;
    for (int i = 0; i < time - 1; i++)
    {
        if (num[i] < num[i + 1])
        {
            count++;
        }
    }
    if (count == time - 1)
        return 1;
    else
        return 0;
}
int fu(int num[], int time)
{
    int temp = num[0] + num[1], count = 0;
    for (int i = 0; i < time; i++)
    {
        for (int j = 0; j < time; j++)
        {
            if (num[i] + num[j] == temp)
            {
                count++;
            }
        }
    }
    if (count == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int num[100], time, flag_pos = 0;
    bool flag[100] = {0};
    scanf("%d", &time);
    // while (scanf("%d", &time) != 0)
    // {
        for (int i = 0; i < time; i++)
        {
            scanf("%d", &num[i]);
        }
        if (fun(num, time) == 1 && fu(num, time) == 1)
        {
            flag[flag_pos] = 1;
        }
        flag_pos++;
    //}
    for (int j = 0; j < flag_pos; j++)
    {
        if (flag[j] == 1)
            printf("Case #%d: It is a B2-Sequence.\n", j + 1);
        else
            printf("Case #%d: It is not a B2-Sequence.\n", j + 1);
        printf("\n");
    }
}