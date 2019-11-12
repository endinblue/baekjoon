#pragma warning (disable:4996);
#include <vector>
#include <cstdio>
#define baekjoon 2456 
#include <algorithm>
using namespace std;

int main() {
	vector<int>arr[4];
	for (int i = 1; i < 4; i++) {
		arr[i].resize(4);
		for (int j = 0; j < 4; j++)
			arr[i][j] = 0;
	}

	int n,a,b,c;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		arr[1][0] += a;
		arr[1][a]++;
		arr[2][0] += b;
		arr[2][b]++;
		arr[3][0] += c;
		arr[3][c]++;
	}
	
	int flag = 0;
	int maxindex = 1;
	for (int i = 2; i < 4; i++) {
		if (arr[maxindex][0] < arr[i][0])
			maxindex = i;
		else if (arr[maxindex][0] == arr[i][0]) {
			flag = i;
		}
	}
	//printf("maxindex %d\n", maxindex);
	int flag2 = 0;	int winnner = 0;
	if (flag != 0) {
		if (arr[maxindex][0] == arr[flag][0]) {
			for (int i = 3; i > 0; i--) {
				if (arr[maxindex][i] != arr[flag][i]) {
					flag2 = 1;
					if (arr[maxindex][i] > arr[flag][i]) {
						printf("%d %d\n", maxindex, arr[maxindex][0]);
						return 0;
					}
					else {
						printf("%d %d\n", flag, arr[flag][0]);
						return 0;
					}
				}
			}
			if (flag2 == 0) {
				printf("%d %d\n",0,arr[maxindex][0]);
				return 0;
			}
		}
	}

	printf("%d %d\n", maxindex, arr[maxindex][0]);
	return 0;

}