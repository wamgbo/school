#include<stdio.h>
//計算換位的次數
void bouble_sort(int num[], int num_size) {
	int temp = 0, count = 0;
	for (int i = 0; i < num_size; i++) {			//氣泡排序法
		for (int j = 0; j < num_size - i - 1; j++)
		{
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
				count++;//換位計數器
			}
		}
	}
	printf("Optimal train swapping takes %d swaps.\n", count);
}
int main() {
	int num[100]={0}, num_size = 0, casetime = 0;
	scanf("%d", &casetime);
	for (int j = 0; j < casetime; j++) {
		scanf("%d", &num_size);
		for (int i = 0; i < num_size; i++) {
			scanf("%d", &num[i]);
		}
		bouble_sort(num, num_size);
	}
}
