#pragma warning(disable:4996)
#include <stdio.h>

#include<stdlib.h>


int main() {
	int t;
	scanf("%d", &t);

	while (t--) {

		int day;
		scanf("%d", &day);
		int **arr = malloc(sizeof(int*)*day);
		for (int i = 0; i < day; i++)
			arr[i] = malloc(sizeof(int*) * 3);


		for (int i = 0; i < day; i++) {
			for (int j = 0; j < 3; j++) {
				int temp;
				scanf("%d", &arr[i][j]);
			}
		}

		int max = 0;
		int total = 0;

		for (int i = 0; i < day; i++) {
			max = 0;
			for (int j = 0; j < 3; j++) {
				if (arr[i][j]>max)
					max = arr[i][j];
			}
			if (max > 0)
				total += max;
		}

		printf("%d\n", total);


	}
}