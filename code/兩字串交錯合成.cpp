#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	string a,b;
	int c,i;
	cin>>a>>b;
	c=a.size()+b.size();
		
		for(i=0;i<=c;i++){
			if(i<a.size())
			cout<<a[i];
			
			if(i<b.size())
			cout<<b[i];
		}
	return 0;
}
