#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	char num[1001];
	int i=0,j=1,value=0;
	int sum0=0,sum1=0;
	while (strcmp(gets(num),"0") != 0) {//當輸入等於0就stop,gets(num)輸入字串,strcmp比較 ture就回傳1 flase回傳0
		while (num[i]!='\0')//執行到'\0'之前
		{
			
			value = num[i] - '0';//字元轉數字
			if (i % 2 == 0) {//取基數位
				sum0 += value;
			}
			else            //偶數位
			{
				sum1 += value;
			}
			i++;
		}
		i=0;
		if (abs(sum0 - sum1) == 0 || abs(sum0 - sum1) % 11 == 0) {//基數偶數相加相差=0 or 11的倍數，就是11的倍數
			printf("%s is a multiple of 11\n", num);
		}
		else
		{
			printf("%s is not a multiple of 11.\n", num);
		}
		sum0=0;
		sum1=0;
	}
	
}