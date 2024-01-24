#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char words[1001];
    int num[128];
    while (fgets(words, sizeof(words), stdin))//針對題目的東重測字可以這樣寫
    {
        memset(num, 0, sizeof(num));//reset
        for (int i = 0; i < strlen(words); i++)
        {
            num[words[i]]++;//把num的位置
        }
        for (int i = 1; i < strlen(words); i++)
        {
            for (int j = 126; j >= 32; j--)//這樣做的同時可以從最大的ascill字元開始印
            {
                if (num[j] == i)//如果等於i可以確認是否為0同時可以從最小的開始印
                {
                    printf("%d %d\n", j, num[j]);
                }
            }
        }
    }
}