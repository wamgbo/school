#include<stdio.h>
#include<string.h>
//如果兩num有公因數就輸出All you need is love!
//用字串來做儲存比較不會有誤差值
void abc(char num[], int casetime);
int gcd(int num, int num1);
int binary(char str[]);

int main() {
	int casetime;
	char str[31], str1[31], result[31] = {0};		//result陣列來存取狀態
	scanf("%d", &casetime);							//輸入次數
	for (int i = 0; i < casetime; i++) {
		scanf("%s", str);							//一組輸入
		scanf("%s", str1);
		if (gcd(binary(str), binary(str1)) != 1) {	
			result[i] = '1';						//符合條件就是1
		}
		else
		{
			result[i] = '0';
		}
	}
	abc(result, casetime);
	
}
int gcd(int num, int num1) {
	return num1 == 0 ? num : gcd(num1, num % num1);		//gcd 輾轉 b a b ab口絕
}
int binary(char str[]) {								//轉換
	int w=1,num=0;
	for (int i = strlen(str) - 1; i >= 0; i--) {		//從最後一位開始計算
		if (str[i] == '1') {
			num += (str[i]-'0') * w;					//num等於轉換後的數字
		}												//將char中轉乘int 等於1 do 
		w *= 2;											//binary權數
	}
	return num;
}
void abc(char num[], int casetime) {					//將狀態輸出的狀態存到陣列
	int i = 0;											
	while (num[i]!='\0')
	{
		if (num[i] == '1') {
			printf("Pair #%d: All you need is love!\n", i + 1);
		}
		else
		{
			printf("Pair #%d: Love is not all you need!\n", i + 1);
		}
		i++;
	}
}
