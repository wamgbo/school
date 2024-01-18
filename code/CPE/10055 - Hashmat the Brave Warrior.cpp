#include<stdio.h>
#include<math.h>

int main(){
    long long num1,num2;
    scanf("%lld %lld",&num1,&num2);
    num1-=num2;
    printf("%lld\n",abs(num1));
}