#include<stdio.h>
//題目規則團中有幾人就住幾天
int main() {
	double S, D;
	while (scanf("%lf%lf", &S, &D)!=EOF)//S=第一團人數，D=要確認的天數)
	{
		while (1)
		{
			D-= S;		//example:S=1 D=14，14天中第1團已經住過了就減掉剩13，第二團-2剩11,.......第五團-5此時D只剩下4會小於0
			if (D <= 0) {	//代表第五團還在住，結果等於0代表那團的最後一天所以也是那一團
				break;
			}
			++S;
		}
		printf("%.0lf\n", S);//利用double才夠精準，用long long 會友精準度上的問題，這代表不一定要在有小數的時候才用double
		S = 0;
		D = 0;
	}
}