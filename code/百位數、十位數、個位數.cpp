#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string a;
	cin>>a;
	cout<<"百位數:"<<a[a.size()-3];
	cout<<"十位數:"<<a[a.size()-2];
	cout<<"個位數:"<<a[a.size()-1];
	
	return 0;
}
