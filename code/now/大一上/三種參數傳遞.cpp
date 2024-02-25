#include<stdio.h>
#include<stdlib.h>
int add_fun(int num1, int num2);
int add_fun_address(int* num1, int* num2);
int add_fun_reference(int& num1, int& num2);



int main() {
	int case_time = 0,intput1=0, intput2 = 0,sum[30];
	int i = 0;
	scanf("%d", &case_time);
	while (case_time--)
	{
		scanf("%d%d", &intput1, &intput2);
		sum[i] = add_fun(intput1, intput2);
		sum[i+1] = add_fun_reference(intput1, intput2);
		sum[i+2] = add_fun_address(&intput1,&intput2);
		i += 3;
	}
	for (int j = 0; j < i; j+=3)
	{
		printf("以call by value:%d\n",sum[j]);
		printf("以call by reference:%d\n", sum[j+1]);
		printf("以call by address:%d\n",sum[j+2]);
		printf("\n");
	}
}

int add_fun(int num1, int num2) {
	return (num1 + num2) * ((num2-num1)+1) / 2;
}

int add_fun_address(int* num1, int* num2) {
	return (*num1 + *num2) * ((*num2-*num1)+1) / 2;
}
int add_fun_reference(int& num1, int& num2) {
	return (num1 + num2) * ((num2-num1)+1) / 2;
}
