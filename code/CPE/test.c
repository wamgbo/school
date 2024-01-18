#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char words[100];
    node *link;
}node;


int main()
{
    node *node1=malloc(sizeof(node));
    strcat(node1->words,"abcde");
    node1->link=node1;

    node *node2=malloc(sizeof(node));
    strcat(node2->words,"abcde");
    node2->link=NULL;
    printf
}