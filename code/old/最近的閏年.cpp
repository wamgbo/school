#include<iostream>
using namespace std;

main(){
	int a,i;
	cin>>a; 
	
	for(i=a+1;i<=a+100;i++){
		if(i%4==0 and i%100!=0 or i%400==0){
			cout<<i<<endl;
			break;
		}
	}
	for(i=a-1;i>=a-100;i--){
		if(i%4==0 and i%100!=0 or i%400==0){
			cout<<i<<endl;
			break;
		}
	}
	
	
	
}
