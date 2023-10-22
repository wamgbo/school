#include<stdio.h>

int gcd(int p, int q) {
	int t;
	while (q != 0)
	{
		t = p % q;
		p = q;
		q = t;
	}
	return p;
}
int lcm(int p, int q) {
	int t;
	t = p * q / gcd(p, q);
	return t;
}
int main() {
	int p, q,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&p,&q);
		printf("%d和%d的最大公因數為%d最小公倍數%d\n", p, q, gcd(p, q), lcm(p, q));
	}
}
