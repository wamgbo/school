//例一輸入：1A.8
//輸出：26.5
//
//
//例二
//輸入：2.5
//輸出：2.3125
//
//
//例三
//輸入：100.56
//輸出：256.3359375
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	int i,point;
	float c=0;
	string a;
	cin>>a;
	for(i=0;i<=a.size()-1;i++){
		if(a[i]=='.'){
			point = i;
		}
	}
	for(i=0;i<point;i++){
		if((int)a[i]>='A' and (int)a[i]<='Z'){
			c+=((int)a[i]-55)*pow(16,point-i-1); 
		} 
		if((int)a[i]>='0' and (int)a[i]<='9')
			c+=((int)a[i]-48)*pow(16,point-i-1);
	}	
		for(i=point+1;a.size()-1;i++){
			if((int)a[i]>='A' and (int)a[i]<='Z'){
				c+=((int)a[i]-55)*pow(16,point-i); 
			} 
			if((int)a[i]>='0' and (int)a[i]<='9')
				c+=((int)a[i]-48)*pow(16,point-i);
		}	
	cout<<c;
	return 0;
}
