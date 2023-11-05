#include<stdio.h>
#include<math.h>
double fun(double n) {
	double c=1;
	double sum=1,x=3.14;
	bool flag = 1;
	for (int i = 3; i <= n; i+=2) {
		for (int j = 1; j < i; j++) {
			c =(double)c* j;
		}
		if (flag) {
			sum -= (double)pow(x, (i - 1)) / c;
			flag = 0;
		}
		else if (!flag)
		{
			sum += (double)pow(x, i - 1) / c;
			flag = 0;
		}
		c = 1;
	}
	return sum;
}
int main() {
	double a=0,num,sum=0,x=3.14;
	while (scanf("%lf", &num) != EOF)
	{
		a = fun(num);
		printf("%.8lf\n", a);
	}
}