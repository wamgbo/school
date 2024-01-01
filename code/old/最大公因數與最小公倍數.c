#include<stdio.h>

int gcd(int p,int q) {
	int t;
	while (q!=0)
	{
		t = p % q;
		p = q;
		q = t;
	}
	return p;
}
int lcm(int p, int q) {
	int t;
	t=p* q / gcd(p, q);
	return t;
}
int main() {
	int p, q;
	while (scanf("%d%d",&p,&q)!=EOF)
	{
		printf("%d和%d的最大公因數為%d最小公倍數%d\n", p, q, gcd(p, q), lcm(p, q));
	}
}
