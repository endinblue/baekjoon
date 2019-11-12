#include <iostream>
#include<cstdio>
using namespace std;

long long  val[91][2];
long long func(int n) {
	val[1][0] = 0;
	val[1][1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				val[i][j] = val[i - 1][0] + val[i - 1][1];
			}
			if (j == 1) {
				val[i][j] = val[i - 1][0];
			}
		}
	}
	return val[n][0] + val[n][1];

}

int main() {
	int n;
	scanf("%d", &n);
	long long answer = func(n);
	cout << answer << endl;

}
