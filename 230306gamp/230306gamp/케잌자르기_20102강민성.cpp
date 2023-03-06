#include <iostream>	
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a < b) {
		if (a < d && b > d) {
			if (a < c && b > c) {
				cout << "not c";
			}
		}
		else if (a > d || b < d) {
			if (a > c || b < c) {
				cout << "not c";
			}
			else
			cout << "c";
		}
		
	}
	else
	{
		cout << "in";
		if (a > d && b < d) {
			cout << "1";
			if (a > c && b < c) {
				cout << "not c";
			}
		}
		else if (a < d || b > d) {
			cout << "3";
			if (a < c || b > c) {
				cout << "not c";
			}
			else
			cout << "c";
		}
		
	}

}