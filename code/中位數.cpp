/*所有值若由小到大排序後正中間的那個值稱爲中位數。
如果值的個數有偶數個，則中位數不唯一，取最中間的兩個數值的平均數作爲中位數
，請寫一程式計算給定整數字資料中的中位數。
*/
#include<stdio.h>
void bubble_sort(int *num, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; ++j) {
			if (num[j] > num[j + 1]) {
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	
}
int main() {
	int num[100],time,total_num,i;
	double sum[100];
	scanf("%d", &time);
	for (i = 0; i < time; i++) {
		scanf("%d", &total_num);
		for (int j = 0; j < total_num; j++) {
			scanf("%d", &num[j]);
		}
		bubble_sort(num, total_num);
		if (total_num % 2 == 0) {
			sum[i] = (double)(num[total_num / 2] + num[total_num / 2 - 1]) / 2;
		}
		else {
			sum[i] = num[((total_num) / 2)];
		}
	}
	for (int i = 0; i < time; i++) {
		printf("%.1lf\n", sum[i]);
	}

}