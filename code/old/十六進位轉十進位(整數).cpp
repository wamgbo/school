#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char hexa[100];
	int sum=0,i,j=0,len;
	cin>>hexa;
	len=strlen(hexa);
	for(i=len-1;i>=0;i--)
	{
		if(hexa[i]>='0' and hexa[i]<='9')
		{
			sum+=(hexa[i]-48)*pow(16,j);
			j++;
		}
		else if (hexa[i]>='A' and hexa[i]<='F')
		{
			sum+=(hexa[i]-55)*pow(16,j);
			j++;
		}
	 } 
	 cout<<sum;
	return 0;
}
