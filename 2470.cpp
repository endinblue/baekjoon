#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;

bool comp(int a, int b) {
	return abs(a) < abs(b);
}

int main() {
	vector <int> vt;
	int n;
	cin >> n;
	int val;
	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> val;
		vt.push_back(val);
	}
	int least = 2000000000;

	sort(vt.begin(), vt.end(), comp);

	for (int i = 0; i < n - 1; i++) {
		int absval = abs(vt[i] + vt[i + 1]);
		if (absval < least) {
			least = absval;
			a = vt[i];
			b = vt[i + 1];
		}
	}
	if (a < b)
		cout << a << " " << b << endl;
	else cout << b << " " << a << endl;
}