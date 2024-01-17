#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, pos = 0, word_check = 0;
    char lines[1000];
    while (1)
    {
        count=0;
        fgets(lines, sizeof(lines), stdin);
        lines[strlen(lines) - 1] = '\0';
        if (lines[0] == '\0')
        {
            break;
        }
        
        for (int i = 0; i <= strlen(lines); i++)
        {
            if (lines[i] == ' ' || lines[i] == '\0')
            {
                word_check = 0;
                for (int j = i - pos; j < i; j++)
                {
                    if (lines[j] >= 'a' && lines[j] <= 'z' || lines[j] >= 'A' && lines[j] <= 'Z')
                    {
                        word_check++;
                    }
                }
                if (word_check > 1)
                {
                    count++;
                }
                pos = 0;
            }
            else
            {
                pos++;
            }
        }
        printf("%d\n", count);
    }
}
