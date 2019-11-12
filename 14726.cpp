#pragma warning(disable:4996)

#include <cstdio>
#include <iostream>

int arr[10];

using namespace std;
int main() {

	std::ios_base::sync_with_stdio(false);
	arr[0] = 0;
	arr[1] = 2;
	arr[2] = 4;
	arr[3] = 6;
	arr[4] = 8;
	arr[5] = 1;
	arr[6] = 3;
	arr[7] = 5;
	arr[8] = 7;
	arr[9] = 9;

	int n;
	int val[16];
	scanf("%d", &n);

	for (int j = 0; j < n; j++) {

		string buffer;
		char tmp[17];
		scanf("%16s", tmp);
		buffer = tmp;

		int sum = 0;

		for (int i = 0; i < 8; i++) {
			val[i * 2] = buffer[i * 2] - 48;
			val[i * 2 + 1] = buffer[i * 2 + 1] - 48;
			val[i * 2] = arr[val[i * 2]];
			sum = sum + val[i * 2] + val[i * 2 + 1];
		}
		if (sum % 10 == 0)
			printf("T\n");

		else
			printf("F\n");
	}
}