#include<stdio.h>
#include<math.h>

int main() {
	double num1, num2,sum=0,sum2=0,sum3=0;
	bool flag=0;
	char operand;
	printf("請輸入:");
	while (scanf("%lf %c %lf", &num1, &operand, &num2) != EOF) {
		if (operand == '+')
			sum = num1 + num2;
		else if (operand == '-')
			sum = num1 - num2;
		else if (operand == '*')
			sum = num1 * num2;
		else if (operand == '/')
			sum = num1 / num2;
		else if (operand == '#')
			sum = pow(num1, num2);
		else {
			printf("運算子有錯!\n");
			flag = 1;
		}
		if(flag==0)
		printf("多重if-elseif:%.2lf\n", sum);
		switch (operand)
		{
		case'+':
			sum2 = num1 + num2;
			break;
		case'-':
			sum2 = num1 - num2;
			break;
		case'*':
			sum2 = num1 * num2;
			break;
		case'/':
			sum2 = num1 / num2;
			break;
		case'#':
			sum2 = pow(num1, num2);
			break;
		default:
			printf("運算子有錯!\n");
			break;
		}
		if (flag==0)
		printf("switch:%.2lf\n", sum2);

		if (operand == '+') {
			sum3 = num1 + num2;
		}
		else {
			if (operand == '-') {
				sum3 = num1 - num2;
			}
			else {
				if (operand == '*') {
					sum3 = num1 * num2;
				}
				else {
					if (operand == '/') {
						sum3 = num1 / num2;
					}
					else {
						if (operand == '#')
							sum3 = pow(num1, num2);
						else
							printf("運算子有錯!\n");
					}
				}
			}
		}
		if (flag == 0) {
			printf("巢狀if else:%.2lf\n", sum3);
			printf("請輸入:");
		}
	}
}
