#include <stdio.h>
#include <string.h>

typedef struct
{
    char words;
    int num;
} data;
void sort(data mydata[], int &count);//排序
void w(char words[], char up, char down, data mydata[], int key);//給結構初始化非0字母
void check(char words[], int key, data mydata[]);

int main()
{
    data mydata[26] = {0};
    int time = 0, count = 0;
    char words[1000] = {0};
    scanf("%d", &time);
    getchar(); // 注意這個的位置不要擺在迴圈裡
    for (int i = 0; i < time; i++)
    {
        fgets(words, sizeof(words), stdin);
        check(words, 0, mydata);
    }
    sort(mydata, count); // 排序
    for (int j = 0; j < count; j++)
    {
        printf("%c %d\n", mydata[j].words, mydata[j].num);
    }
}

void sort(data mydata[], int &count)
{
    data temp;
    for (int i = 0; i < 26; i++) // 計算26個英文單字中，有數字的count++
    {
        if (mydata[i].num != 0)
        {
            count++;
        }
    }
    for (int i = 0; i < 26; i++) // 依數字大小排序結構位置
    {
        for (int j = 0; j < 26 - i - 1; j++)
        {
            if (mydata[j].num < mydata[j + 1].num)
            {
                temp = mydata[j];
                mydata[j] = mydata[j + 1];
                mydata[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i <= count; i++) // 在以找到的數字中依字典大小排序
    {
        for (int j = 0; j <= count - i - 1; j++)
        {
            if (mydata[j].words < mydata[j].words)
            {
                temp = mydata[j];
                mydata[j] = mydata[j + 1];
                mydata[j + 1] = temp;
            }
        }
    }
}
void w(char words[], char up, char down, data mydata[], int key)
{
    for (int i = 0; i <= strlen(words); i++) // 檢查字串使否有A~Z
    {
        if (words[i] == up || words[i] == down) // 有找到的時候就將字母放入結構並把數字++
        {
            mydata[key].num++;
            mydata[key].words = ('A' + key);
        }
    }
}
void check(char words[], int key, data mydata[])
{
    char up = 'A' + key, down = 'a' + key; // 定義A~Z
    if (up == 'Z' || down == 'z')          // 到Z就停下來
    {
        w(words, up, down, mydata, key);
    }
    else // false就繼續執行
    {
        w(words, up, down, mydata, key);
        key++;
        check(words, key, mydata); // 從A到Z執行，key++就是往下一位英文字母前進
    }
}