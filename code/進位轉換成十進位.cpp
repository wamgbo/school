#include<stdio.h>

int transform(int base ,int num) {
	int sum = 0;
	int base2 = 1;
	while (num>0)
	{
		sum += (num % 10 )* base2;
		num /= 10;
		base2 *= base;
	}
	return sum;
}
int main() {
	int num, base,sum=0,n=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d%d", &base, &num);
		sum = transform(base, num);
		printf("%d\n", sum);
	}
		
	}
	
