#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int word_size = 0, i = 0, sum = 0;;
	scanf("%d", &word_size);
	char *word =(char*) malloc((word_size +1)* sizeof(char));
	getchar();
	fgets(word, (word_size + 1), stdin);
	while (word[i]!='\0')
	{
		if (word[i] >= '0' && word[i] <= '9')
		{
			sum += (word[i] - '0');
		}
		i++;
	}
	printf("%d", sum);
}