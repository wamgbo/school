#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int i,a,b=0,f1=1,f2=1;
	cin>>a;
		if(a>=2){
			cout<<f1<<" "<<f2<<" ";
		}
		else if(a==0){
			cout<<0;
		}
		else{
			cout<<f1<<" ";
		}
		for(i=0;i<=a-3;i++){
			b=f1+f2;
			f1=f2;
			f2=b;
			cout<<b<<" ";
		
	}
	
		
	return 0;
}
