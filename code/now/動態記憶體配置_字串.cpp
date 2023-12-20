#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int case_time,len,sum=0;
	char* wptr;
	scanf("%d", &case_time);
	getchar();//需要擷取\n;
	wptr = (char*)malloc(case_time * sizeof(char));
	fgets(wptr, strlen(wptr) - 1, stdin);
	len = strlen(wptr) - 1;
	while (len--)
	{
		if (*(wptr + len) >= '0' && *(wptr + len) <= '9') 
		{
			sum += *(wptr + len) - '0';
		}
	}
	printf("%d", sum);
}