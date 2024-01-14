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
    int pos, time;
    data temp[10] = {0};//temp
    scanf("%d", &time);//次數
    for (int i = 0; i < time; i++)
    {
        pos = 0;
        data mydata[10] = {0};
        input(mydata);
        compare(mydata, temp, pos);
        printf("Case #%d:\n", i + 1);
        for (int j = 0; j < pos; j++)
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

void compare(data mydata[], data temp[], int &pos) // 找最大
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
            temp[pos].num = mydata[i].num;
            strcpy(temp[pos].url, mydata[i].url);
            pos++;//紀錄有位個值
        }
    }
}