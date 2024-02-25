#include<stdio.h>
#include<string.h>
void encryption(char words[], int len)
{
	for (int i = 0; i < len-1 ;i++)//i<len-1，len是array的大小，如果不減1會把最後一位的結數字元也移位。
	{							   //舉個栗子len=13 i<len for只會執行到12位，正好是'\0'。所以要-1。
		if (words[i] == 'A')//當A時-3位會超出範圍，而外設定
		{
			words[i] = 'X';
		}
		else if (words[i] == 'B')//同上
		{
			words[i] = 'Y';
		}
		else if (words[i] == 'C')//同上
		{
			words[i] = 'Z';
		}
		else
		{
			words[i] -= 3;//題目規律加密+三位，解密-三位
		}
	}
	printf("%s", words);
}
int main() {
	char input_words[30];
	int len;
	fgets(input_words, 30, stdin);
	len = strlen(input_words);
	encryption(input_words, len);//呼叫!!
}