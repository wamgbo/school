#include<stdio.h>

int main() {
	int max = 0;
	int count[5] = {0};
	int num[5][5] = {
	0,1,0,1,0,//1
	1,0,1,1,0,//2
	0,1,0,1,1,//3
	0,1,1,0,1,//4
	1,0,1,0,1 };//5
	for (int  i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (num[i][j] == 1) {
				count[i]++;
			}
		}
	}
	max = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5-1-i; j++)
		{
			if (count[max] < count[j+1])
				max = j+1;
		}
	}
	printf("認識最多人的號碼:%d\n", max+1);
}

