#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(char zodiac[][40]);

int main() {
	char key[40] = { 0 };
	char zodiac[12][40] = { "rat", "ox", "tiger", "hare", "dragon", "snake", "horse",
										"sheep", "monkey", "rooster", "dog", "pig" };
	scanf("%s", key);
}

void sort(char zodiac[][40]) 
{
	char temp[40] = { 0 };
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (strlen(zodiac[j]) > strlen(zodiac[j + 1])) {
				strcpy(temp, zodiac[j]);
				strcpy(zodiac[j], zodiac[j + 1]);
				strcpy(zodiac[j + 1], temp);
			}
		}
	}
	for (int i = 0; i < 12; i++)
	{
		printf("%s\n", zodiac[i]);
	}
}