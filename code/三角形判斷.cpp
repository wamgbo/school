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
					printf("�U���T����\n");
				else if (max * max == b * b + c * c)
					printf("�����T����\n");
				else if (max * max > b * b + c * c)
					printf("�w���T����\n");
			}
			else
				printf("�D�T����\n");

		}
		else if (max == b) {
			if (a + c > max){
				if (max * max < a * a + c * c)
					printf("�U���T����\n");
				else if (max * max == a * a + c * c)
					printf("�����T����\n");
				else if (max * max > a * a + c * c)
					printf("�w���T����\n");
			}
			else
				printf("�D�T����\n");
		}
		else if (max == c) {
			if (b + a > max) {
				if (max * max < a * a + b * b)
					printf("�U���T����\n");
				else if (max * max == a * a + b * b)
					printf("�����T����\n");
				else if (max * max > a * a + b * b)
					printf("�w���T����\n");
			}
			else
				printf("�D�T����\n");
		}
		else
			printf("�D�T����");
		
	}
}
