#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string a;
	int b,c,i;
	cin>>a;
	cout<<a[0]; 
	for(i=0;i<a.size()-1;i++){
		if(a[i]!=a[i+1]){
			cout<<1;
		}	
		else
		cout<<0;
	}
	
	
	return 0;
}

