#include <iostream>

using namespace std;

int main() {
	int max = 0;
	int money = 0;
	int arr[7] = { 0 };
	for (int i = 0; i < 3; i++) {
		int x;
		cin >> x;
		arr[x]++;
	}

	for (int i = 1; i < 7; i++) {
		if (arr[i] == 3) {
			money += 10000;
			money += i * 1000;
			break;
		}
		if (arr[i] == 2) {
			money += 1000;
			money += i * 100;
			break;
		}
		if (arr[i] == 1) {
			if (max < i)
				max = i;
		}

	}

	if (money != 0)
		cout << money;
	else cout << max * 100;
}