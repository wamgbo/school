#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	int a,b,i;
	cin>>a;

	b=0;
	for(i=1; i<=a; i++) {
		if(a%i==0) {
			b+=1;
		}
	}
	cout<<"有"<<b<<"個因數";






	return 0;
}

