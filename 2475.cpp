#pragma warning(disable:4996)
//#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;


int main() {

	ios::sync_with_stdio(false);
	int t;
	int count = 0;
	for (int i = 0; i < 5; i++) {
		cin >> t;
		count = (count + t*t);

	}
	cout << count % 10;

	//system("pause");

}