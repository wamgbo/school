#include<stdio.h>

int main() {
	int a, b, c,max;
	while (scanf("%d %d %d",&a,&b,&c)!=EOF)
	{	
		if (a > b) {
			max = a;
		}
		else
			max = b;
		if (c > max)
			max = c;

		if (max == a) {
			if (b + c > max) {
				if (max * max < b * b + c * c)
					printf("銳角三角形\n");
				else if (max * max == b * b + c * c)
					printf("直角三角形\n");
				else if (max * max > b * b + c * c)
					printf("鈍角三角形\n");
			}
			else
				printf("非三角形\n");

		}
		else if (max == b) {
			if (a + c > max){
				if (max * max < a * a + c * c)
					printf("銳角三角形\n");
				else if (max * max == a * a + c * c)
					printf("直角三角形\n");
				else if (max * max > a * a + c * c)
					printf("鈍角三角形\n");
			}
			else
				printf("非三角形\n");
		}
		else if (max == c) {
			if (b + a > max) {
				if (max * max < a * a + b * b)
					printf("銳角三角形\n");
				else if (max * max == a * a + b * b)
					printf("直角三角形\n");
				else if (max * max > a * a + b * b)
					printf("鈍角三角形\n");
			}
			else
				printf("非三角形\n");
		}
		else
			printf("非三角形");
		
	}
}
