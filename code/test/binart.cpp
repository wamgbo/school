#include<stdio.h>
#include<string.h>

void recursive(int num){
    if (num/2<=0)
    {
        printf("%d",num%2);
    }
    else 
    {
        recursive(num/2);
        printf("%d",num%2);
    }
}

void four(int num){
    int result[100]={0};
    int i=0;
    while (num!=0)
    {
        result[i]=num%2;
        num/=2;
        i++;
    }
    
    for(int j=i-1;j>=0;j--){
        printf("%d",result[j]);
    }
}

int main(){
    int w=1,sum=0,num;
    scanf("%d",&num);
    printf("根據遞迴: 相對之二進位值為:");
    recursive(num);
    printf("\n");
    printf("根據非遞迴: 相對之二進位值為:");
    four(num);
    printf("\n");

}