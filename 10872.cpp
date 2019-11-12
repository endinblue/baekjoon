#pragma warning(disable:4996) 
#include <cstdio>
#include <malloc.h>

using namespace std;

int main() {
	int arr[13];
	arr[0] = 1;
	for (int i = 1; i < 13; i++)
		arr[i] = arr[i - 1] * i;

	int t;
	scanf("%d", &t);
	printf("%d\n", arr[t]);

}