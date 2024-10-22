#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int num;
	struct node *next;
}node;
void reverse(node **head)
{
	node *prev ,*current ,*forward;
	current=NULL;
	forward=(*head)->next;
	while(forward->next!=NULL){
		prev=current;
		current = forward;
		current->next=prev;
		forward=forward->next;
	}

}

int main(){
	node *node1=malloc(sizeof(node)),*node2=malloc(sizeof(node)),*node3=malloc(sizeof(node)),*node4=malloc(sizeof(node));
	node1->num=1;
	node1->next=node2;
	node2->num=2;
	node2->next=node3;
	node3->num=3;
	node3->next=node4;
	node4->next=NULL;
	node4->num=4;

	node *temp=node1;
	while(temp!=NULL)
	{
		printf("%d\n",temp->num);
		temp=temp->next;
	}
	reverse(&node1);
	temp=node4;
	while(temp!=NULL)
	{
		printf("%d\n",temp->num);
		temp=temp->next;
	}
}
