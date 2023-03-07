#include <iostream>	
using namespace std;

int main() {
	int a, b, c, d, count = 0;
	cin >> a >> b >> c >> d;

	if (a < b) {
		int t;
		t = a;
		a = b;
		b = t;
	}
	for (int i = a; i < b; i++)
	{
		if (i == c || i == d)
			count++;
	}
	if (count == 0 || count == 2)
		cout << "not cross";
	else
		cout << "cross";

	//if (a < b) {
	//	if (a < d && b > d) {
	//		if (a < c && b > c) {
	//			cout << "not c";
	//		}
	//	}
	//	else if (a > d || b < d) {
	//		if (a > c || b < c) {
	//			cout << "not c";
	//		}
	//		else
	//		cout << "c";
	//	}
	//	
	//}
	//else
	//{
	//	cout << "in";
	//	if (a > d && b < d) {
	//		cout << "1";
	//		if (a > c && b < c) {
	//			cout << "not c";
	//		}
	//	}
	//	else if (a < d || b > d) {
	//		cout << "3";
	//		if (a < c || b > c) {
	//			cout << "not c";
	//		}
	//		else
	//		cout << "c";
	//	}
	//	
	//}

}