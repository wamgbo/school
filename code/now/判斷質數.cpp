#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	int a,b=0,i;
	while(cin>>a) {
		for(i=2; i<=a/2; i++) {
			if(a%i==0) {
				b++;
				break;
			}
		}
		if(b==0) {
			cout<<"是質數"<<endl;
		} else {
			cout<<"不是質數"<<endl;
		}
		b=0;
	}





	return 0;
}
