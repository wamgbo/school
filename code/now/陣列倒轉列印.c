#include<stdio.h>
#include<string.h>
void sort(int words[], int time) {//排序陣列
	int temp;
	for (int i = 0; i < time; i++) {
		for (int j = 0; j < time - i - 1; j++)
		{
			if (words[j] > words[j + 1]) {
				temp = words[j + 1];
				words[j + 1] = words[j];
				words[j] = temp;
			}
		}
	}
}
void Reveres_array(const int intput_words[], int time) {
	int i = time - 1;
	int j = 0;
	int output_words[100];//輸出字串
	while (i >= 0)//當i>=0就執行
	{
		output_words[j] = intput_words[i];//輸入陣列的最後一位放到輸出陣列的第一位
		i--;
		j++;
	}
	printf("以非遞迴函式處理：");
	for (int i = 0; i < time; i++)
	{
		printf("%d ", output_words[i]);
	}
	printf("\n");
}
void Recursive_reveres_array(const int input_words[], int time) {
	if (time == 0) {//結束條件順便換行
		printf("\n");
	}
	else
	{
		printf("%d ", input_words[time - 1]);//從最後一會開始，每次呼叫就列印目前數字
		Recursive_reveres_array(input_words, time - 1);//呼叫自己並往上一位
	}
		
	
}
int main() {
	int time = 0;
	int input_words[100] = {};
	printf("陣列大小:");
	while (scanf("%d", &time) != EOF)
	{
		for (int i = 0; i < time; i++)
		{
			printf("陣列內容:");
			scanf("%d", &input_words[i]);//輸入陣列內容
			
		}

		sort(input_words, time);//排序陣列
		Reveres_array(input_words, time);//非遞迴倒轉
		printf("以遞迴函式處理：");
		Recursive_reveres_array(input_words, time);//遞迴倒轉
		printf("陣列大小:");
	}
}