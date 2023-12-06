#include<stdio.h>
int value(int num1, int num2);
int address(int* num1, int* num2);
int reference(int &num1, int &num2);

int main() {
	int num1,num2;
	scanf("%d%d", &num1, &num2);
	printf("%d\n", value(num1, num2));
	int anum1 = num1, anum2 = num2;//call by address的方式會更改變數，所以我新定義變數去存就變數，不然會錯誤
	printf("%d\n", address(&anum1, &anum2));
	printf("%d\n", reference(num1, num2));
	
}
int value(int num1, int num2) {
	int sum = 0;
	for (int i = num1; i <= num2; i++) {
		sum += i;
	}
	return sum;
}
int address(int *num1, int *num2) {	
	int sum = 0;
	for (int i = *num1; i <= *num2; i++) {
		sum += i;
	}
	return sum;
}
int reference(int &num1, int &num2) {
	int sum = 0;
	for (int i = num1; i <= num2; i++) {
		sum += i;
	}
	return sum;
}