#include<stdio.h>
#define DUMMY -1
char compare(char A,char B)
{
	if(A>B)
		return '>';
	else if(A==B)
		return '=';
	else
		return '<';
}
void padding(int A[],int B[],int C[])
{
	int p,q,r;
	p=q=r=2;
	int m=A[1],n=B[1];
	char result;
	while(p<=m*2&&q<=n*2)//polynomial number 
	{
		result=compare(A[p],B[q]);
		switch(result)
		{
			case '=':
				C[r+1]=A[p+1]+B[q+1];
				if(C[r+1]!=0)
				{
					C[r]=A[p];
					r+=2;
				}
				p+=2;
				q+=2;
				break;
			case '>':
				C[r]=A[p];
				C[r+1]=A[p+1];
				p+=2;
				r+=2;
				break;
			case '<':
				C[r]=B[q];
				C[r+1]=B[q+1];
				q+=2;
				r+=2;
				break;
		}
	}
	while(p<=2*m){
		C[r+1]=A[p+1];
		C[r]=A[p];
		p+=2;
		r+=2;
	}
	while(q<=2*n){
		C[r+1]=B[q+1];
		C[r]=B[q];
		q+=2;
		r+=2;
	}
	C[1]=r/2-1;
}
void outputP(int A[],int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("%5d",A[i]);
	}
}
int main(void)
{
	int A[]={DUMMY,3,4,5,2,3,0,2};
	int B[]={DUMMY,3,3,6,2,2,0,1};
	int C[13]={DUMMY};
	padding(A,B,C);
	outputP(A,A[1]*2+1);
	printf("\n");
	outputP(B,B[1]*2+1);
	printf("\n");
	outputP(C,C[1]*2+1);
	printf("\n");
}
