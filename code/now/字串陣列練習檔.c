#include <stdio.h>
#include <stdlib.h>
int length(char []);
void copy(char a[],char []);
void change(char a[]);
void concatenate(char a[],char []);
void reverse(char []);
int main()
{   	
	char a[80],b[80],c[80];
printf("請輸入陣列a的內容:\n");
 scanf("%s",a);
 //gets(a);
 printf("陣列a的長度為:%d\n",length(a));
printf("copy陣列a的內容到陣列b...\n");
 copy(b,a);
 printf("陣列b的內容為:%s\n",b);
printf("請輸入陣列c的內容\n");
 scanf("%s",c);
 printf("串接陣列c的內容到陣列a的內容之後...\n");
 concatenate(a,c);
 printf("陣列a的內容為:%s\n",a);

	printf("將陣列b的內容中大寫英文字轉為小寫,小寫英文字轉為大寫...\n");
	change(b);
    printf("陣列b的內容為:%s\n",b);
    printf("陣列a的內容原來為:%s\n",a);
   reverse(a);
    printf("陣列a的內容經反轉後成為: %s\n",a);
    system("pause");
    return 0;
}
int length(char a[])
{   int i=0; 
	while (a[i]!='\0')
		i++;
	return i;
}
void copy(char b[],char a[]) //字元陣列a複製到字元陣列b
{ 
	int i = 0;
	while (a[i]!='\0')
	{
		b[i] = a[i];
		i++;
	}
	b[i] = a[i];

}
void change(char a[])  //大小寫轉換
{  
	int i = 0;
	while (a[i]!='\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] += 32;
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			a[i] -= 32;
		}
	}

}
void concatenate(char a[],char b[]) //字元陣列b串接到字元陣列a之後
{ 
	int i=length(a);
	int j = 0;
	while (b[j]!='\0')
	{
		a[i] = b[j];
		i++;
		j++;
	}

}
void reverse(char a[])//字串反轉 
{
	int i = 0;
	int len = length(a);
	char temp;
	while (a[i] != '\0')
	{
		a[i] = a[len - i];
		i++;
	}
}
