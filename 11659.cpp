#pragma warning(disable:4996) 
#include <cstdio>
#include <malloc.h>

using namespace std;

int main() {
	int n, t;
	scanf("%d %d", &n, &t);

	int *arr;
	arr = (int*)malloc(sizeof(int)*(n + 1));

	arr[0] = 0;
	for (int i = 1; i < n + 1; i++) {
		scanf("%d", &arr[i]);
		arr[i] += arr[i - 1];
	}

	for (int j = 0; j < t; j++) {
		int p, q;
		//int sum = 0;
		scanf("%d %d", &p, &q);

		printf("%d\n", arr[q] - arr[p - 1]);

	}
}