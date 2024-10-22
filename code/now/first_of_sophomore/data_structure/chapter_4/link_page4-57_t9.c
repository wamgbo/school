#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int item;
    struct node *llink,*rlink;  // 
} node;
void recycle(node *head){
	node *temp;
	while(head!=NULL)
	{
		temp=head;
		head=head->rlink;
		free(temp);
	}
}
int main(void) {
	node *head=malloc(sizeof(node));
	node *prev=malloc(sizeof(node));
	node *current=malloc(sizeof(node));
	node *tail=malloc(sizeof(node));

	head->item=4;
	head->rlink=prev;
	head->llink=tail;
	prev->item=3;
	prev->rlink=current;
	prev->llink=head;
	current->item=2;
	current->rlink=tail;
	current->llink=prev;
	tail->item=1;
	tail->rlink=head;
	tail->llink=current;
	recycle(head);
}
