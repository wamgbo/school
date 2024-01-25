#include <stdio.h>
#include <stdlib.h>
int fun(int num)//5*5方格的總方格數=5^5..2^2+1^1
{
    if (num == 1)
    {
        return 1;
    }
    return (num * num) + fun(num - 1);
}
int main()
{
    int num, result = 0;
    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        result = fun(num);
        printf("%d\n", result);
    }
}