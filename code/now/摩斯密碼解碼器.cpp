#include<stdio.h>
#include<string.h>

void decoding(char* words, int i);
//當input[i]=='|'就將前面字元放入decoding，當有對應的密碼輸出字母 PS記得要對結束位元做設定
int main() 
{
	int i = 0,j=0;
	char output[30] = {0};
	char input[30] = {0};
	fgets(input, sizeof(input), stdin);
	while (input[i] != '\0') 
	{
		if (input[i] == '|' || input[i + 1] == '\0') //while設定讀到字串前一位所以i+1
		{
			strncpy(output, input + j, i - j);//
			output[i - j] = '\0'; // 加入空字元結束字串
			decoding(output, 0); // 解碼並打印相應的字符
			j = i + 1;//跳過|，因執行到if時當前自元是| 
		}//j用來記錄|與'\0'共用了幾格空間
		i++;
	}
}

void decoding(char* words, int i)
{
	char password[26][30] = { "‧—","—‧‧‧","—‧—‧","—‧‧","‧",//摩斯密碼對應英文字母
											"‧‧—‧","——‧","‧‧‧‧","‧‧","‧———",
											"—‧—","‧—‧‧","——","—‧","———",
											"‧——‧","——‧—","‧—‧","‧‧‧","—",
											"‧‧—","‧‧‧—","‧——","—‧‧—","—‧——"
											,"——‧‧" };
	char sword = 'A' + i;		//利用ascii特性+i獲得下一位英文字母
	if (strcmp(words, password[i]) == 0)
		printf("%c", sword);
	else
	{
		return decoding(words, i + 1);//從a尋找到到z
	}

}