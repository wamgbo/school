#include<stdio.h>
#include<string.h>

struct date_st//
{
	int date[3] = { 0 };
}my_date;

void compare(struct date_st* date, struct date_st* date_1, int i);

int main() 
{
	struct date_st date[30];//date_st 自訂型態,date[30]就是變數名稱及array
	scanf("%d/%d/%d", &date[0].date[0], &date[0].date[1], &date[0].date[2]);//分別輸入
	scanf("%d/%d/%d", &date[1].date[0], &date[1].date[1], &date[1].date[2]);
	compare(&date[0], &date[1], 2);//傳位置給函示
}

void compare(struct date_st* date, struct date_st* date_1, int i)
{//分別從年開始比到日期
	if (i < 0)
	{
		printf("Samn\n");
	}
	else if (date->date[i] > date_1->date[i])//struct指標 = date.date[i];
	{
		printf("After\n");
	}
	else if (date->date[i] < date_1->date[i])
	{
		printf("Before\n");
	}
	else if (date->date[i] = date_1->date[i])
	{
		compare(date, date_1, i - 1);//當年比完發現都一樣就往月份
	}
}