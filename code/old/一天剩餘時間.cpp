/*要求：輸出時分秒必須是兩位數。

例一
輸入：8  0  0
輸出：今天剩餘16:00:00

例二
輸入：10  3  2
輸出：今天剩餘13:56:58
*/


#include<iostream>
using namespace std;
string c,d;
string wo(int a){
	c=(char)a/10+48;
	d=(char)a%10+48;
	return c+d;
}
int main(){
	int h,m,s,all=86400;
	cin>>h>>m>>s;
	all=all-((h*60*60)+(m*60)+s);
	h=all/3600;
	m=all%3600/60;
	s=all%3600%60;
	cout<<"今天剩餘時間"<<wo(h)<<":"<<wo(m)<<":"<<wo(s);
	
}

