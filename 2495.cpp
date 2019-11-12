#include <iostream>

using namespace std;

int main() {

	int n;
	for (int i = 0; i < 3; i++) {
		cin >> n;
		int max = 0;
		int cnt = 1;
		int before = -1;
		for (int i = 0; i < 8; i++) {
			int r = n % 10;
			n = n / 10;
			if (r == before)
				cnt++;
			else cnt = 1;

			if (cnt > max)
				max = cnt;
			before = r;

		}
		cout << max << endl;
	}
}