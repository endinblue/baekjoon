#include <cstdio>
#pragma warning(disable: 4996)

using namespace std;

int main() {

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		int a;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &a);
			sum += a;
		}
		if (sum == 0)
			printf("D\n");
		else if (sum == 1)
			printf("C\n");
		else if (sum == 2)
			printf("B\n");
		else if (sum == 3)
			printf("A\n");
		else printf("E\n");
	}


}