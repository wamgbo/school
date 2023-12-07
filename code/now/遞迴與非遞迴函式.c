#include<stdio.h>

double fun(int num_M ,int num_N);
double recursive_fun(int num_M, int num_N);

int main() {
	int num_M,num_N;
	scanf("%d%d", &num_M,&num_N);			//輸入
	printf("%.3lf\n", fun(num_M, num_N));
	printf("%.3lf\n", recursive_fun(num_M, num_N));
}
double fun(int num_M, int num_N){
	double son=1,mom=1;
	for(int i=1;i<=num_N;i++)
	{
		son*= ((double)num_M - i*2);		//確保資料型態轉換
		mom*= ((double)i*2-1);
		
	}
	return son / mom;

}
double recursive_fun(int num_M, int num_N) {
	if (num_N == 1) {
		return ((double)num_M - 2 * num_N) / ((double)num_N * 2 - 1);
	}
	return ((double)num_M - 2 * num_N) / ((double)num_N * 2 - 1) *recursive_fun(num_M,num_N-1);
}