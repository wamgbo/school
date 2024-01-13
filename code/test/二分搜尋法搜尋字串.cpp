#include<stdio.h>
#include<string.h>
// <二分搜尋法搜尋字串> 寫一C程式在主程式中建立二維陣列，存入使用者給定之六個字串(
//     字串中可能有空白，字串長度不超過39);
//      之後將這些字串按字典順序由小到大排序，再利用二分搜尋函式搜尋使用者輸入的某字串是否在陣列中，
//      若在，則傳回其位置，否則印出"不存在陣列中"。
void sort(char product[][39],int time){
    char temp[39];
    for (int i = 0; i < time; i++)
    {
        for (int j = 0; j < time-i-1; j++)
        {
            if (strcmp(product[j],product[j+1])>0)
            {
              strcpy(temp,product[j+1]);
              strcpy(product[j+1],product[j]);
              strcpy(product[j],temp);  
            }
        }
    }
}

void lookingforkeyword(char product[][39],char key[],int left,int right){
    int mid=(right+left)/2;
    if (right<left)
    {
        printf("不存在陣列中\n");
    }
    else if (strcmp(product[mid],key)==0)
    {
        printf("%d\n",mid);
    }

    else if (strcmp(key,product[mid])>0)
    {
        lookingforkeyword(product,key,mid+1,right);
    }
    else if(strcmp(key,product[mid])<0)
    {
        lookingforkeyword(product,key,left,mid-1);
    }
}
int main(){
    char product[6][39],key[39];
    int time =5;
    while (time>=0)
    {
        scanf("%s",product[time]);
        time--;
    }
    time=5;
    scanf("%s",key);
    sort(product,time);
    for (int i = 0; i <=time; i++)
    {
        printf("%s\n",product[i]);
    }
    lookingforkeyword(product,key,0,time);
}
