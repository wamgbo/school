#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Node{
  char data[100];
  struct Node* next;
  
};
void linkedListTravasel(struct Node* ptr){
  
  while(ptr!=NULL){
    printf("%s",ptr->data);
    ptr=ptr->next;
  }
}
int main(){
  struct Node* head;
  struct Node* second;
  struct Node* third;
  
  head=(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));
  
  strcat(head->data,"abc");
  head->next=second;
  
  strcat(second->data,"def");
  second->next=third;
  
  strcat(third->data,"ghi");
  third->next=NULL;
  linkedListTravasel(head);
}