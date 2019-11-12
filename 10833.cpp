#pragma warning(disable:4996)
//#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;


int main() {

	ios::sync_with_stdio(false);
	int t;
	int count = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		count = count + b%a;

	}
	cout << count;
	//	system("pause");
}