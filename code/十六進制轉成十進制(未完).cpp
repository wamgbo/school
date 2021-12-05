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
		if((int)a[i]>=65 and (int)a[i]<=90){
			c+=((int)a[i]-55)*pow(16,point-i-1); 
		} 
		if((int)a[i]>=48 and (int)a[i]<=57)
			c+=((int)a[i]-48)*pow(16,point-i-1);
	}	
		for(i=point;i<point;i++){
			if((int)a[i]>=65 and (int)a[i]<=90){
				c+=((int)a[i]-55)*pow(16,i-1-point); 
			} 
			if((int)a[i]>=48 and (int)a[i]<=57)
				c+=((int)a[i]-48)*pow(16,i-1-point);
		}	
	cout<<c;
	return 0;
}
