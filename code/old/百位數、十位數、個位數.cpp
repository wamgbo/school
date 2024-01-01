#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string a;
	cin >> a;
	if (a.size() > 2) {
		cout << "百位數:" << a[a.size() - 3];
	}
	else {
		cout << "百位數:" << 0;
	}
	if (a.size() > 1) {
		cout << "十位數:" << a[a.size() - 2];
	}
	else {
		cout << "十位數:" << 0;
	}
	if (a.size() > 0) {
		cout << "一位數:" << a[a.size() - 1];
	}
	else {
		cout << "一位數:" << 0;
	}
	
	return 0;
}
