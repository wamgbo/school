#include<stdio.h>
#include<math.h>

int function(int num) {
	int i;
	if (num <= 1) {
		return 0;
	}
	else if (num <= 3 and num >= 2)
	{
		return 1;
	}
	else
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0) {
				break;
			}
		}
		if (i < num) {
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

int main() {
	int num, ramification, ramification2, i,j;
	while (scanf("%d", &num)!=EOF)
	{
		if (num <= 1) {
			printf("2\n");
			continue;
		}
		j = num;
		while (true)
		{
			j += 1;
			ramification2 = function(j);
			if (ramification2 == 1) {
				break;
			}
		}
		
		
		for (i = num; i >=1; i--)
		{
			ramification = function(i);
			if (ramification == 1) {
				break;
			}
		}
		if (abs(num - i) == abs(num - j)) {
			printf("%d\n", j);
		}
		else if(abs(num - i) > abs(num - j))
		{
			printf("%d\n", j);
		}
		else
		{
			printf("%d\n", i);
		}
		
	}
}