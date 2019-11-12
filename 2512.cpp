#pragma warning(disable: 4996)
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {

	int n;
	scanf("%d", &n);
	vector <int> arr;
	int sum = 0;
	int max = 0;
	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%d", &temp);
		arr.push_back(temp);
		sum += temp;
		if (temp > max)
			max = temp;
	}

	int money;
	scanf("%d", &money);

	if (money >= sum) {
		printf("%d\n", max);
		return 0;
	}

	int high = max - 1;
	int low = money / n;
	int result = 0;
	while (low <= high) {
		sum = 0;
		int mid = (low + high) / 2;
		for (int i = 0; i < n; i++) {
			if (arr[i] > mid)
				sum += mid;
			else sum += arr[i];
		}
		if (sum > money)
			high = mid - 1;
		else if (sum == money) {
			printf("%d\n", mid);
			return 0;
		}
		else {
			low = mid + 1;
			result = mid;
		}
	}



	printf("%d\n", result);
	return 0;



}