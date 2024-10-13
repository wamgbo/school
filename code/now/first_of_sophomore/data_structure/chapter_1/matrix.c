#include<stdio.h>
#define N 5
void matrix(int num[N][N])
{
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)
			printf("%5d",num[i][j]);
		printf("\n");	
	}
}
int main(void)
{
	int A[N][N]={
		1,2,3,4,5,
		1,2,3,4,5,
		1,2,3,4,5,
		1,2,3,4,5,
		1,2,3,4,5,
	};
	int B[N][N]={
		5,4,3,2,1,
		5,4,3,2,1,
		5,4,3,2,1,
		5,4,3,2,1,
		5,4,3,2,1,
	};	
	int C[N][N]={0};
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)
		{
			int sum=0;
			for(int k=0;k<N;k++)
			{
				sum+=A[i][k]*B[k][j];
				C[i][j]=sum;
			}
		}
	}
	matrix(C);
}

