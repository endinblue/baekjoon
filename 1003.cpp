#pragma warning(disable:4996) 
#include <cstdio>
#include <malloc.h>

using namespace std;

int main() {
	int arr[41][2];

	arr[0][0] = 1;
	arr[0][1] = 0;
	arr[1][0] = 0;
	arr[1][1] = 1;

	for (int i = 2; i < 41; i++) {
		for (int j = 0; j < 2; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i - 2][j];
		}
	}
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int s;
		scanf("%d", &s);
		printf("%d %d\n", arr[s][0], arr[s][1]);
	}
}