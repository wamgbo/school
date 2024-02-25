#include<stdio.h>
#include<string.h>

int main() {
	int j=0,i = 0, result=0,w=1;
	char word[200] = {0};
	fgets(word, sizeof(word), stdin);
	for(int i=strlen(word)-1;i>=0;i--)//從後面開始做方便做數字權的設計
	{
		j = 0;//計數器
		w = 1;//位數
		if (word[i] >= '0' && word[i] <= '9') //當數字出現
		{
			while (word[i-j] >= '0' && word[i-j] <= '9')//只要i位前一位還是數字就繼續搜取數字
			{
				result += (word[i-j] - '0') * w;
				w *=10;//連續數字中的數字權不同
				j++;//j計數器負責看前一位是否是數字
			}
			i -=j;//將i減掉計數器，避免i把蒐集過的數字再次執行判斷
		}
	}
	printf("%d", result);
}