#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char words[30];
    double num;
} data;

void check_line(data list[], char word[])
{
    int i = 0;
    while (list[i].num != 0)
    {
    }
}

int main()
{
    data list[1000];
    int time;
    double count = 0;
    char words[30];
    scanf("%d", &time);
    for (int i = 0; i < time; i++)
    {
        while (1)
        {
            getchar();
            fgets(words, sizeof(words), stdin);
            words[strlen(words) - 1] = '\0';
            if (words[0] == '\0')
            {
                break;
            }

            for (int j = 0; j < 1000; j++)
            {
                if (list[j].num == 0)
                {
                    list[j].num++;
                    count++;
                    strcpy(list[j].words, words);
                }
                else if (strcmp(list[j].words, words) == 0)
                {
                    count++;
                    list[j].num++;
                }
            }
        }
        for (int k = 0; k <= count; k++)
        {
            if(list[k].num!=0)
            printf("%s%1.4f\n", list[i].words, count / list[i].num);
        }
    }
}