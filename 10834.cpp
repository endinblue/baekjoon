#pragma warning (disable: 4996)
#include<cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {

	int test;
	cin >> test;

	bool flag = false;
	double rotate = 1;
	for (int i = 0; i < test; i++) {
		double a, b, c;
		cin >> a >> b >> c;
		rotate = rotate*b / a;
		if (c == 1)
			flag = !flag;
		//printf("%d\n", flag);
	}
	int rotate2 = rotate;
	cout << flag << " " << rotate2;
}
