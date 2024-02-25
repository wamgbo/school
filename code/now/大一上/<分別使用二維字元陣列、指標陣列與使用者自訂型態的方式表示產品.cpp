#include<stdio.h>
#include<stdlib.h>

typedef struct products_stu {
	char product[30];
	int price;
};

void fun_str(products_stu products[]);
void fun_ptr(const char* products[], int* price);
void fun(char products[][30], int* price);

int main() {
	char products[5][30] = { "banana","apple","keyborad","usb","mouse" };
	int price[5] = { 15,20,2000,300,1499 };
	const char* ptr[5] = { "banana","apple","keyborad","usb","mouse" };
	products_stu data[5]= { "banana",15,"apple",20,"keyborad",2000,"usb",300,"mouse",1499 };
	fun(products, price);
	fun_ptr(ptr, price);
	fun_str(data);
}

void fun_str(products_stu products[]) //結構
{
	int max = (products)->price, postion;
	for (int i = 0; i < 5; i++)
	{
		if (max < (products + i)->price) {
			max = (products + i)->price;
			postion = i;
		}
	}
	printf("%d %s\n", max, (products + postion)->product);
}

void fun_ptr(const char* products[], int* price) {//指標
	int max = *(price), postion;
	for (int i = 0; i < 5; i++)
	{
		if (max < *(price + i)) {
			max = *(price + i);
			postion = i;
		}
	}
	printf("%d %s\n", max, products[postion]);
}

void fun(char products[][30], int* price) {
	int max = *(price), postion;
	for (int i = 0; i < 5; i++)
	{
		if (max < *(price + i)) {
			max = *(price + i);
			postion = i;
		}
	}
	printf("%d %s\n", max, products[postion]);
}