
#include<iostream>
using namespace std;
int main(){
	int h,a,b,now_h=0,day=0;
	cin>>h>>a>>b;
	while(1){	
		now_h+=a;
		if(now_h<h){
			now_h-=b;
		}
		day+=1; 
		if(now_h>=h){
			break;
		}
	}
	cout<<day<<"天";
}
