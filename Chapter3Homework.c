#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5
int front = MAX - 1;
int rear = MAX - 1;
char QueueItem[MAX][20];
// int flag = 0;//利用count代替flag
int count = 0; // 改為當新增物件count+1,刪除物件count-1

void AddItem(); // add queue num
void RmItem();  // rm queue num
void ListItem();   // list totaly num

int main(void)
{
	char option;
	char input[4];
	while (1)
	{
		printf("*********************\n\n");
		printf("choose your option\n\n");
		printf("(0) AddItem       (2) RmItem\n\n");
		printf("(1) ListItem      (3) Exit\n\n");
		printf("*********************\n");
		if (fgets(input, sizeof(input), stdin) != NULL)
		{
			// 檢查輸入的長度是否超過1（除了換行符之外）
			if (strlen(input) > 2 || (strlen(input) == 2 && input[1] != '\n'))
			{
				printf("unknown option!!!\n");
				continue;
			}
			option = input[0];
			switch (option)
			{
			case '0':
				AddItem();
				break;
			case '1':
				ListItem();
				break;
			case '2':
				RmItem();
				break;
			case '3':
				exit(0);
				break;
			default:
				printf("unknown option!!!\n"); // 當不明輸入時報錯
			}
		}
	}
}
void AddItem()
{
	if (count >= MAX)
		printf("queue is full!!\n");
	else
	{
		rear = (rear + 1) % MAX;
		printf("enter the number:\n");
		scanf("%s", QueueItem[rear]);
		while (getchar() != '\n') // clear input temp
			continue;
		/*if (front == rear)
			flag = 0;*/
		count++;
	}
}
void RmItem()
{
	if (count <= 0)
	{
		printf("no item,queue is empty!!\n");
	}
	else
	{
		front = (front + 1) % MAX;
		// strcpy(QueueItem[front],"\0");//當刪除時直接蓋掉位置，不用再多做一次strcpy
		printf("item %s has delete!!\n", QueueItem[front]);
		/*if (front == rear)
			flag = 0;*/
		count--;
	}
}
void ListItem()
{
	int i = (front + 1) % MAX;
	if (count <= 0)
	{
		printf("queue is empty!!\n");
	}
	else
	{
		printf("*********************\n\n");
		printf("QueueItem:\n");
		for (int j = 0; j < count; j++) // 利用count來判斷queue item的數量
		{
			printf("%s\n", QueueItem[i]);
			i++;
			i %= MAX;
		}
		/*while (i != front || i == rear)
		{
			if (strcmp(queue_num[i], "\0") != 0)
			{
				printf("%s\n", queue_num[i]);
				count++;
			}
			i++;
			i = i % MAX;
		}
		*/
		printf("totaly_queue_num:%d\n", count);
	}
}
