#include<stdio.h>

void factor(int n) {
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d", i);
			printf(" ");
		}
	}
}
int main() {
	int n;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d �����]�Ƭ�:", n);
		factor(n);
		printf("\n");

	}
}