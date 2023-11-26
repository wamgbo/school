#include<stdio.h>
int sum = 1;
int result = 1;
int factoral(int num) {//階乗的函式
	if (num == 0) {
		return 1;
	}
	else
	{
		sum = num * factoral(num - 1);//每次呼叫自己的時候就乘自己一次
	}
}
int combinatorial_number(int num1,int num2) {
	int sum;
	sum=factoral(num1) / (factoral(num2) * factoral(num1 - num2));//組合數"n!/m!(n!-m!)"的公式
	return sum;
}

int recursive_combinatorial_number(int num1, int num2) {
	if (num2 == 0 or num2 == num1) {
		return 1;
	}
	else
	{//巴斯卡定理C (n-1)取(m-1) + C (n-1)取m = C n取m
		return recursive_combinatorial_number(num1 - 1, num2) + recursive_combinatorial_number(num1 - 1, num2 - 1);
	}
}
int main() {
	int time,num1,num2,num3;
	while (scanf("%d", &time) != EOF)
	{
		for (int i = 0; i < time; i++) {
			scanf("%d%d", &num1, &num2);
			printf("以非遞迴函式處理：%d\n", combinatorial_number(num1, num2));
			printf("以遞迴函式處理：%d\n", recursive_combinatorial_number(num1, num2));
		}
	}
}