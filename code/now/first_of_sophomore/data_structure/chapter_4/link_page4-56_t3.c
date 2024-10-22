#include<stdio.h>
#include<stdlib.h>

typedef struct polynomial {
    int x;          // 多項式中的次數
    int num;        // 多項式中的係數
    struct polynomial *next;  // 指向下一個節點
} polynomial;

polynomial *A_head = NULL;
polynomial *B_head = NULL;
polynomial *C_head = NULL;

// 比較兩個多項式次數
char compare(int A, int B) {
    if (A > B)
        return '>';
    else if (A == B)
        return '=';
    return '<';
}

// 初始化多項式鏈結串列
void inital(polynomial **A, int input_x, int input_num) {
	polynomial *temp=malloc(sizeof(polynomial));
	temp->x=input_x;
	temp->num=input_num;
	temp->next=NULL;
	if(*A==NULL)
		*A=temp;
	else
	{
		polynomial *current=malloc(sizeof(polynomial));
		current=*A;//從開頭讀到結尾
		while(current->next!=NULL)//諾不為NULL，做到結尾
			current=current->next;
		current->next=temp;
	}
} 
void sub_number(polynomial **A,polynomial **B, polynomial **C)
{
	polynomial *current_A=*A;
	polynomial *current_B=*B;
	polynomial *current_C=*C;
	while(current_A!=NULL&&current_B!=NULL)
	switch(compare(current_A->x,current_B->x))
	{
		case '=':
			inital(&(*C),current_A->x,(current_A->num+current_B->num));
			current_A=current_A->next;
			current_B=current_B->next;
			break;
		case '>':
			inital(&(*C),current_A->x,current_A->num);
			current_A=current_A->next;
			break;
		case '<':
			inital(&(*C),current_B->x,current_B->num);
			current_B=current_B->next;
			break;
	}
}	
int main(void) {
    // 初始化多項式 A
    inital(&A_head, 12, 4);//傳入開頭
    inital(&A_head, 4, 1);
    inital(&A_head, 1, 2);
    // 初始化多項式 B
    inital(&B_head, 3, 5);
    inital(&B_head, 1, 6);
    
    // 可以繼續進行其他操作
    // 顯示 A 多項式鏈結串列中的項目
	sub_number(&A_head,&B_head,&C_head);
    polynomial *current_C = C_head;
	while(current_C!=NULL)
	{
        printf("C: x=%d num=%d\n", current_C->x, current_C->num);
        current_C = current_C->next;
	}
	
    polynomial *current_A = A_head;
    while (current_A != NULL) {
        printf("A: x=%d num=%d\n", current_A->x, current_A->num);
        current_A = current_A->next;
    }

    // 顯示 B 多項式鏈結串列中的項目
    polynomial *current_B = B_head;
    while (current_B != NULL) {
        printf("B: x=%d num=%d\n", current_B->x, current_B->num);
        current_B = current_B->next;
	}
    return 0;
}
