#include <stdio.h>
#include <string.h>
int main()
{
  char number[1001];
 
    int num1=100,num2=200;
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("%d,%d",num1,num2);
  
  
}