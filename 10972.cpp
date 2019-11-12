#pragma warning(disable : 4996)
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	scanf("%d", &t);
	vector<int> arr;
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		arr.push_back(n);
	}

	int temp;
	bool flag = true;
	for (int i = t - 1; i > 0; i--) {
		if (arr[i] > arr[i - 1]) {
			temp = i;
			flag = false;
			break;
		}
	}

	int temp2;
	if (flag == true)
		printf("-1\n");

	else {
		for (int i = t - 1; i >= 0; i--) {
			if (arr[i] > arr[temp - 1]) {
				temp2 = i;
				break;
			}
		}

		int temp3 = arr[temp - 1];
		arr[temp - 1] = arr[temp2];
		arr[temp2] = temp3;

		sort(arr.begin() + temp, arr.begin() + t);

		for (int i = 0; i < t; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");



	}
}