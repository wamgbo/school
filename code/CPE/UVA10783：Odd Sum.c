#include<stdio.h>
//加減範圍內的奇數
int main() {
	int num1, num2, casetime, sum[31] = {0};
	scanf("%d", &casetime);//輸入次數
	for (int i = 0; i < casetime; i++) 
	{
		scanf("%d%d", &num1, &num2);//定義範圍
		for (int j = num1; j <= num2; j++) 
		{
			if (j % 2 != 0) //是奇數就家到sum
			{
				sum[i]+= j;
			}
		}	
	}
	for (int k = 0; k < casetime; k++) 
	{
		printf("Case %d: %d\n", k + 1, sum[k]);
	}
}