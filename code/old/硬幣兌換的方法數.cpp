#include<stdio.h>

int main() {
	int num, loop = 0, count = 0, i, j, k;
	while(scanf("%d", &num)!=EOF){
	for(i=0;i<=num/10;i++)
		for(j=0;j<=num/5;j++)
			for (k = 0; k <= num; k++) {
				if (i * 10 + j * 5 + k == num) {
					count += 1;
				}
			}
	printf("%d\n", count);
	count=0;
	}
}
