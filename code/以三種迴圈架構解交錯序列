#include<stdio.h>
#include<math.h>
int main() {
	double n,outcome=1, outcome2 = 1, outcome3 = 1;
	int count=2;
	bool flag = true;
	printf("請輸入n:");
	while (scanf("%lf", &n) != EOF) {
		for (int i = 2; i <= n; i++) {
			if (flag == 1) {
				outcome += (pow(i, 2) - 1) / pow(i, 2);
				flag = 0;
			}
			else
			{
				outcome -= (pow(i, 2) - 1) / pow(i, 2);
				flag = 1;
			}

		}
		printf("for:%.3lf\n", outcome);
		outcome = 0;
		flag = true;
		while (count <= n)
		{
			if (flag == 1) {
				outcome2 += (pow(count, 2) - 1) / pow(count, 2);
				flag = 0;
			}
			else
			{
				outcome2 -= (pow(count, 2) - 1) / pow(count, 2);
				flag = 1;
			}
			count++;

		}
		printf("while:%.3lf\n", outcome2);
		outcome2 = 0;
		count = 2;
		flag = true;

		do
		{
			if (flag == 1) {
				outcome3 += (pow(count, 2) - 1) / pow(count, 2);
				flag = 0;
			}
			else
			{
				outcome3 -= (pow(count, 2) - 1) / pow(count, 2);
				flag = 1;
			}
			count++;
		} while (count <= n);
		printf("do while:%.3lf\n", outcome3);
		outcome3 = 0;
		count = 2;
		flag = true;
		printf("請輸入n:");
	}

}
