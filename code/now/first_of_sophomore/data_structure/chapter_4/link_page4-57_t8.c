#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int item;
    struct node *llink,*rlink;  // 
} node;

void add_head(node **head,int num){
	node *temp=malloc(sizeof(node));
	temp->item=num;
	temp->llink=(*head)->llink;
	temp->rlink=(*head);
	(*head)->llink->rlink=temp;
	(*head)->llink=temp;
	(*head)=temp;
}
void rm_head(node **head){
	(*head)->rlink->llink=(*head)->llink;
	(*head)->llink->rlink=(*head)->rlink;
	(*head)=(*head)->rlink;
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

	node *temp=head;
	printf("原先的list:\n");
	do{
		printf("%d\n",temp->item);
		temp=temp->rlink;
	}
	while(temp!=head);

	add_head(&head,5);
	add_head(&head,6);
	add_head(&head,7);
	add_head(&head,8);
	temp=head;
	printf("新增head後的list:\n");
	do{
		printf("%d\n",temp->item);
		temp=temp->rlink;
	}
	while(temp!=head);

	rm_head(&head);
	rm_head(&head);
	rm_head(&head);
	temp=head;
	printf("刪除head後的list:\n");
	do{
		printf("%d\n",temp->item);
		temp=temp->rlink;
	}
	while(temp!=head);
	
}
