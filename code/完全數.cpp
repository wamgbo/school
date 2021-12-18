#include <iostream>
using namespace std;
int main (){
	int i,a,j,b;
	cin>>a;
	for(i=2;i<=a;i++){
		b=0;
		for(j=1;j<=i/2;j++){
			if(i%j==0){
				b+=j;
			}	
		}
		if(b==i){
			cout<<b<<' ';
		}
	}
}
