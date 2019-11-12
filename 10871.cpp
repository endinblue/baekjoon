#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	int n, x;

	scanf("%d %d", &n, &x);

	while (n--) {
		int num;
		scanf("%d", &num);

		if (num < x) {
			printf("%d ", num);

		}


	}


}
