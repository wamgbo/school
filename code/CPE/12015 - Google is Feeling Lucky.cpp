#include <stdio.h>
#include <string.h>

typedef struct
{
    int num;
    char url[101] = {0};
} data;

void input(data mydata[]);
void compare(data mydata[], data temp[], int &pos);

int main()
{
    int Appear_time, time;
    data temp[10] = {0};//temp
    scanf("%d", &time);//次數
    for (int i = 0; i < time; i++)
    {
        Appear_time = 0;
        data mydata[10] = {0};
        input(mydata);
        compare(mydata, temp, Appear_time);
        printf("Case #%d:\n", i + 1);
        for (int j = 0; j < Appear_time; j++)
        {
            printf("%s\n", temp[j].url);//
        }
    }
}

void input(data mydata[])//輸入
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%s %d", mydata[i].url, &mydata[i].num);
    }
}

void compare(data mydata[], data temp[], int &Appear_time) // 找最大
{
    int max = mydata[0].num;
    for (int i = 0; i < 10; i++)//找裡面的最大值
    {
        max = max > mydata[i].num ? max : mydata[i].num;
    }
    for (int i = 0; i < 10; i++)//有等於max的值就放進temp
    {
        if (mydata[i].num == max)
        {
            temp[Appear_time].num = mydata[i].num;
            strcpy(temp[Appear_time].url, mydata[i].url);
            Appear_time++;//紀錄有次數
        }
    }
}