#include <stdio.h>
#include <stdlib.h>

int main()
{
	int siz[3];
	int total;
	for (int i = 0; i< 3; i++) {
		scanf("%d %d %d %d", &siz[0], &siz[1], &siz[2], &total);

	}

	for (int i = 0; total - siz[0] * i >= 0; i++) {
		for (int j = 0; total - siz[0] * i - siz[1] * j >= 0; j++) {
			if ((total - siz[0] * i - siz[1] * j) % siz[2] == 0) {
				printf("1\n");
				return 0;
			}
		}
	}

	printf("0\n");
}
