#pragma warning(disable:4996) 
#include <cstdio>
#include <malloc.h>

using namespace std;

int main() {
	int arr[21];
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < 21; i++)
		arr[i] = arr[i - 1] + arr[i - 2];

	int t;
	scanf("%d", &t);
	printf("%d\n", arr[t]);
}