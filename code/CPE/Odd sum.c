#include<stdio.h>

int main() {
	int time = 0 , num1, num2, i = 0,num_sum=0, sum[100];
	while (scanf("%d",&time)!=EOF)
	{
		for (i = 1; i <= time; i++){
			scanf("%d %d", &num1, &num2);
			for (int j = num1; j <= num2; j++) {
				if (j % 2 != 0) {
					num_sum += j;
				}
				sum[i] = num_sum;
			}
			num_sum = 0;
		}
		for (i = 1; i <= time; i++) {
			printf("Case %d: %d\n", i, sum[i]);
		}
		
	}
	
}
