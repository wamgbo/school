#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int item;
	struct node *llink,*rlink;
}node;

void insert(node *x,node *new)//插入new node在x node後面
{
	x->rlink->llink=new;
	new->rlink=x->rlink;
	new->llink=x;
	x->rlink=new;
}

int main(void){

	//初始化node、item、rlink、llink
   	node *head = (node *)malloc(sizeof(node));
	node *node3 = (node *)malloc(sizeof(node));
	node *x = (node *)malloc(sizeof(node));
    node *tail = (node *)malloc(sizeof(node));	
	node *new = (node *)malloc(sizeof(node));
	node *current=head;
	//item
	head->item = 1;
	x->item = 2;//x node
    node3->item = 3;
    tail->item = 4;
    new->item = 5;//new node
	//rlink,llink
	head->rlink = x;
	x->rlink = node3;
	node3->rlink = tail;
	tail->rlink = head;
	head->llink = tail;
	tail->llink = node3;
	x->llink = head;
	node3->llink = x;
	insert(x,new);//呼叫insert function
	do{//歷變list rlink
		printf("%d",current->item);
		current=current->rlink;
	}while(current!=head);
	printf("\n");
	current=tail;
	do{//歷變list llink
		printf("%d",current->item);
		current=current->llink;
	}while(current!=tail);	//釋放記憶體
	free(head);
	free(x);
	free(node3);
	free(tail);
	free(new);	
}
