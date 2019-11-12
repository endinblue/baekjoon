#pragma warning(disable:4996)
//#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;


int main() {

	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	int c = a - b;
	int a5 = 0, b5 = 0, c5 = 0;
	long long aaa = 5;

	if (a < 5) {
		cout << 0;
		return 0;
	}
	if (a == b) {
		cout << 0;
		return 0;
	}

	if (b == 0) {
		cout << 0;
		return 0;
	}
	while (a >= aaa) {
		a5 = a5 + a / aaa;
		aaa = aaa * 5;
	}

	aaa = 5;
	while (b >= aaa) {
		b5 = b5 + b / aaa;
		aaa = aaa * 5;
	}

	aaa = 5;
	while (c >= aaa) {
		c5 = c5 + c / aaa;
		aaa = aaa * 5;
	}

	int a2 = 0, b2 = 0, c2 = 0;
	long long aa = 2;
	long long bb = 2, cc = 2;

	while (a >= aa) {
		a2 = a2 + a / aa;
		aa = aa * 2;
	}
	while (b >= bb) {
		b2 = b2 + b / bb;
		bb = bb * 2;
	}
	while (c >= cc) {
		c2 = c2 + c / cc;
		cc = cc * 2;
	}
	//cout << a5 << " " << b5 << " " << c5 << endl;
	if (a2 - c2 - b2>a5 - c5 - b5)
		cout << a5 - c5 - b5 << endl;
	else cout << a2 - c2 - b2 << endl;
	//system("pause");
}