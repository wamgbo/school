#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int a,b,c,i;
	cin>>a>>b>>c;
	if(a*a==c*c+b*b or b*b==c*c+a*a or c*c==a*a+b*b){
		cout<<"啊可以"; 
	}
	else 
	cout<<"啊不可以";

	return 0;
}

