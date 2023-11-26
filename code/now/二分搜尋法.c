#include<stdio.h>
int count=0;
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
void binary_search(int num[],int left ,int right,int key) {
	int mid = (left + right) / 2;//尋找中間值
	count++;
	if (left> right) {//當left>right已經不合理了
		printf("查無此數字");
	}
	else if(num[mid]==key)//
	{
		printf("搜尋次數%d\n",count);
		printf ("%d",num[mid]);
	}

	if (key > num[mid]) {//當目標大於中間值搜尋mid+1到right的範圍
		binary_search(num, mid + 1, right, key);
	}
	else if (key<num[mid])//當目標小於中間值搜尋mid+1到left的範圍
	{
		binary_search(num, left, mid-1, key);
	}
}
int main() {
	int num[100] = {};
	int key;
	printf("搜尋數字：");
	scanf("%d" ,&key);//輸入key
	for (int i = 0; i < 15; i++) {//輸入陣列值
		scanf("%d ",&num[i]);
	}
	printf("數字陣列內容：");
	for (int i = 0; i < 15; i++) {//輸出陣列值
		printf("%d ", num[i]);
	}
	sort(num,15);
	printf("\n");
	printf("排序後：");
	for (int i = 0; i < 15; i++) {//輸出排序後陣列值
		printf("%d ", num[i]);
	}
	printf("\n");
	binary_search(num,0,15,key);
	

}