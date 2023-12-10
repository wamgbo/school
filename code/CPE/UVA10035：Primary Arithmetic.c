#include<stdio.h>
#include<string.h>

int carry_count(char str1[], char str2[]);

int main() {
	char str1[31]={0}, str2[31] = {0};
	while(1){
		scanf("%s%s", str1, str2);
		if (str1[0] == '0' || str2[0] == '0')	//當0 0結束
			break;
		if (carry_count(str1, str2) > 1)		
		{
			printf("%d carry operations.\n", carry_count(str1, str2));
		}
		else if (carry_count(str1, str2) == 1) //針對1特別處理注意s
		{
			printf("%d carry operation.\n", carry_count(str1, str2));
		}
		else
		{
			printf("No carry operation.\n");//注意s
		}
	}
}
int carry_count(char str1[], char str2[]) {
	int carry = 0, carry_count = 0,j=0,i=0;
	while (i < strlen(str1) || j < strlen(str2))//它會繼續執行直到兩個整數的所有對應位都被處理完。
	{	
		int sum = 0;
		int num1 = i > strlen(str1)-1 ? 0 : str1[strlen(str1) - 1 - i] - '0';//當i大於str1 長度就停止 設為0
		int num2 = j > strlen(str2)-1 ? 0 : str2[strlen(str2) - 1 - j] - '0';//當j大於str2 長度就停止 設為0
		sum = carry + num1 + num2;//進位+num1+num2;
		carry = sum / 10;//取進位
		if (sum > 9)
			carry_count++;//計數進位數
		i++;
		j++;
	}
	return carry_count;
}
