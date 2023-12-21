#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(char zodiac[][40]);
void binary(char zodiac[][40], char key[], int left, int right) {
	int mid = (right + left) / 2;
	if (right < left) {
		printf("不在資料庫中");
	}
	if (strcmp(key, zodiac[mid]) == 0) {//如果strcmp回傳0等於兩字串相等
		printf("%d", mid);
	}
	else if (strlen(key) > strlen(zodiac[mid]))
	{
		binary(zodiac, key, mid, right);
	}
	else if (strlen(key) < strlen(zodiac[mid]))
	{
		binary(zodiac, key, left, mid);
	}

}
int main() {
	char key[40] = { 0 };
	char zodiac[12][40] = { "rat", "ox", "tiger", "hare", "dragon", "snake", "horse",
										"sheep", "monkey", "rooster", "dog", "pig" };
	sort(zodiac);//排序
	fgets(key, sizeof(key), stdin);
	key[strlen(key) - 1] = '\0';//使用fgets所接收的值會讀到\n才結束所以結束字元的前一位會是\n，這樣做才能把\n改成\0
	binary(zodiac, key, 0, 11);//二分
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