/*/亂數的應用 - 10題分數加減乘除運算 > 你(妳)是個有愛心的哥哥(姐姐)，常常幫弟妹複
習功課。現在你(妳)打算用電腦亂數產生10題兩個分數之間的加減乘除運算給你的弟妹
練習，請寫一個程式產生此10道數學式子，請留意，為避免太過複雜，所有分子與分母
都要在1到9之間的正整數，此外，分子不能等於分母，且運算結果不能為負數。
1) 3/5 + 1/5 = 4/5     (2) 1/3 + 5/9 = 8/9(3) 7/4 -1/4 = 3/2        (4) 5/7 * 3/5 = 7/3*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int gcd(int num1, int num2);
void fun(int a1, int a2, int b1, int b2, int op);
int main() {
	int a1, a2, b1, b2, op=0, sum1 = 0, sum2 = 0;
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		printf("(%d) ", i + 1);
		op = rand() % 4;
		do {
			a1 = 1 + rand() % 9;
			a2 = 1 + rand() % 9;
			b1 = 1 + rand() % 9;
			b2 = 1 + rand() % 9	;
		} while (a1 == a2 or b1 == b2 or (a1 / a2) - (b1 / b2) <= 0);
		fun(a1, a2, b1, b2,op);
	}
}
void  fun(int a1,int a2 ,int b1,int b2,int op) {
	int  sum1 = 0, sum2 = 0,temp=0;
		switch (op)
		{
		case 0:
			sum1 = a1*b2+b1*a2;
			sum2 = a2 * b2;
			temp = gcd(sum1, sum2);
			printf("%d/%d+%d/%d = %d/%d\n", a1, a2, b1, b2,sum1/temp,sum2/temp);
			break;
		case 1:
			sum1 = a1 * b2 - b1 * a2;
			sum2 = a2 * b2;
			temp = gcd(sum1, sum2);
			printf("%d/%d-%d/%d = %d/%d\n", a1, a2, b1, b2,sum1/temp,sum2/temp);
			break;
		case 2:
			sum1 = a1 *  b1;
			sum2 = a2 * b2;
			temp = gcd(sum1, sum2);
			printf("%d/%d*%d/%d = %d/%d\n", a1, a2, b1, b2,sum1/temp,sum2/temp);
			break;
		case 3:
			sum1 = a1 * b2 ;
			sum2 = a2 * b1;
			temp = gcd(sum1, sum2);
			printf("%d/%d/%d/%d = %d/%d\n", a1, a2, b1, b2,sum1/temp,sum2/temp);
			break;
		default:
			break;
		}
}
int gcd(int num1, int num2) {
	int t=0;
	while (num2!=0)
	{
		t = num1 % num2;
		num1 = num2;
		num2 = t;
	}
	return num1;
}