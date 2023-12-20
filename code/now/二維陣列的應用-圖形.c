#include<stdio.h>

int main() {
	int sum[5] = {0};
	int num[5][5] = 
	{ {0,1,0,0,1}
	,{1,0,1,1,0}
	,{0,1,0,1,1}
	,{0,1,1,0,1}
	,{1,0,1,1,0} };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (num[i][j] == 1) {
				sum[i]++;
			}
		}
	}
	
	

}