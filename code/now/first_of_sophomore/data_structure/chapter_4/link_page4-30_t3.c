#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int item;
	struct node *next;
}node;

node *head=NULL;
node *tail=NULL;
void push(int num)
{
	printf("放入%d\n",num);
	node *newnode=malloc(sizeof(node));
	newnode->item=num;
	if(head==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		newnode->next=head;
		tail->next=newnode;
		head=newnode;
	}
}

void pop() {  // 刪除最後一個節點
		if(head==NULL)
			printf("stack is empty!!!\n");
		else
		{
			printf("取出%d\n",head->item);
			if(head==tail)
			{
				head=NULL;
				tail=NULL;
			}
			else
				head=head->next;
		}
}
int main(void){
	//初始化node、item、rlink、llink
	push(123);
	push(456);
	pop();
	pop();
	pop();
	push(789);
	pop();
}
