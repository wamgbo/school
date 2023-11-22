#include<stdio.h>

int main() {
	char word[100],temp,count=0;
	int i = 0;
	while (scanf("%s",word)!=EOF)
	{
		while (word[i] != '\0')
		{
			i += 1;
		}
		for (int j = 0; j < i; j++) {
			if (word[j] == word[(i-1) - j])
				count++;
		}
		if (count == i )
			printf("%s是迴文\n", word);
		else
		{
			printf("不是迴文\n");
		}
		count = 0;
		i = 0;
	}
}