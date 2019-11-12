#include <iostream>
using namespace std;

int main() {
	int down[10];
	int up[10];
	int total = 0;
	int max = 0;
	for (int i = 0; i < 10; i++) {
		cin >> down[i];
		total - down[i] > 0 ? total = total - down[i] : total = 0;
		cin >> up[i];
		total + up[i] < 10001 ? total = total + up[i] : total = 10000;
		if (max < total)
			max = total;

	}

	cout << max;
}