#include<stdio.h>
#include<math.h>
long GCD(int num ,int num2) {
	int temp=0;
	while (num2!=0)
	{
		temp = num % num2;
		num = num2;
		num2 = temp;
	}
	return num;
}
long long fun(int num) {
	int sum = 0, i = 0;
	while (num != 0)
	{
		sum += num % 10 * pow(2, i);
		num /= 10;
		i += 1;
	}
	return sum;
}
int main() {
	long long num = 0,sum,sum2;
	scanf("%d", &num);
	for (int i = 1; i <=num; i++) {
		scanf("%d%d", &sum,&sum2);
		sum = fun(sum);
		sum2 = fun(sum2);
		if (GCD(sum, sum2)==1) {
			printf("Pair #%d: Love is not all you need!\n",i);
		}
		else
		{
			printf("﻿﻿Pair #%d: All you need is love!\n", i);
		}
	}
	
}