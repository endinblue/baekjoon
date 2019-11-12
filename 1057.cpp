#include <cstdio>
#pragma warning(disable: 4996)

using namespace std;

int main() {
	int total;
	int count = 1;
	int p1, p2;
	scanf("%d %d %d", &total, &p1, &p2);

	while (true) {
		p1++;
		p2++;
		if (p1 / 2 == p2 / 2) {
			printf("%d\n", count);
			return 0;
		}
		else {
			p1 = p1 / 2;
			p2 = p2 / 2;
			count++;
		}

	}


}
