#include <stdio.h>
#include <math.h>
int main()
{
    double num1, num2, temp;
    int count = 0;
    while (1)
    {
        count = 0;
        scanf("%lf %lf", &num1, &num2);
        if (num1 == 0 && num2 == 0)
        {
            break;
        }
        else
        {
            for (int i = num1; i <= num2; i++)
            {
                temp = i;
                temp = sqrt(temp);
                if (temp - (int)temp == 0)//當浮點數temp-整數temp=0就代表開根號後事整數
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
}