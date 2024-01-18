#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char lines[1000];
    bool flag = 1;
    while (fgets(lines, sizeof(lines), stdin) != NULL)
    {
        count = 0;
        for (int i = 0; i <= strlen(lines); i++)
        { // idea by xufeng.
            if (!((lines[i] >= 'A' && lines[i] <= 'Z') || (lines[i] >= 'a' && lines[i] <= 'z')))
            {
                if (flag == 1)
                {
                    count++;
                    flag = 0;
                }
            }
            else
            {
                flag = 1;
            }
        }
        printf("%d\n", count);
    }
}