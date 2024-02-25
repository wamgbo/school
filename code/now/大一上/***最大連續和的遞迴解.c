#include<stdio.h>
#include<string.h>
int maxSubArraySum(int line[], int size);

int main() {
	int array_len_time, array_len, line[100];
	int j,i;
	scanf("%d", &array_len_time);//幾組測資
	for (i = 0; i < array_len_time; i++) {//陣列長度
		scanf("%d", &array_len);
		for (j = 0; j < array_len; j++) {//陣列值
			scanf("%d", &line[j]);
		}
		printf("%d\n", maxSubArraySum(line, j));
		memset(line, 0, sizeof(line));//memset函式(arr,0,陣列大小)將陣列塞滿0
	}
	
	return 0;
}
int maxSubArraySum(int line[], int right) {
	int max = line[right];//最大=初始數
	int sum = 0;		//陣列連續合的數值
	if (right == 0)		//當執行到line[0]，無法往下加，就回傳
		return line[0];
	for (int j = right; j >=0 ; j--) {//從line[right-1]往line[0]累加
		sum += line[j];				
		max = max > sum ? max : sum;//line[right-1]與目前連續和數比較，大於就將目前連續和數列為max
	}
	return max = max > maxSubArraySum(line, right - 1)?max:maxSubArraySum(line,right-1);
}	//將目前的max與上一位回傳值的max做比較，example:fun(line,8)得max=8與fun(line,7)得max=6做比大小得8;
	//因此function的遞迴設定，會分別一路比較example:fun(line,8)、fun(line,7).....fun(line,0);分別找出max並回傳