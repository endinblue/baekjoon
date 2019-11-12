#pragma warning(disable: 4996)
#include <cstdio>

using namespace std;

class node {
public:
	char data;

	node() {};
	node(char d) {
		data = d;
	}
};

node arr[1000];

void preorder(int s) {
	printf("%c", arr[s].data);
	if (arr[s * 2].data != NULL)
		preorder(s * 2);
	if (arr[s * 2 + 1].data != NULL)
		preorder(s * 2 + 1);
}

void inorder(int s) {
	if (arr[s * 2].data != NULL)
		inorder(s * 2);
	printf("%c", arr[s].data);

	if (arr[s * 2 + 1].data != NULL)
		inorder(s * 2 + 1);
}

void postorder(int s)
{
	if (arr[s * 2].data != NULL)
		postorder(s * 2);

	if (arr[s * 2 + 1].data != NULL)
		postorder(s * 2 + 1);

	printf("%c", arr[s].data);
}
int main() {

	int t;
	char aa, bb, cc;
	scanf("%d", &t);
	scanf("%c", &aa);
	scanf("%c %c %c", &aa, &bb, &cc);
	arr[1] = node(aa);
	if (bb == '.')
		arr[2] = node(NULL);
	else arr[2] = node(bb);
	if (cc == '.')
		arr[3] = node(NULL);
	else
		arr[3] = node(cc);

	for (int i = 1; i < t; i++) {
		scanf("%c", &aa);
		scanf("%c %c %c", &aa, &bb, &cc);

		for (int j = 1; j < 500; j++) {
			if (arr[j].data == aa) {
				if (bb == '.')
					arr[j * 2] = node(NULL);
				else arr[j * 2] = node(bb);
				if (cc == '.')
					arr[j * 2 + 1] = node(NULL);
				else arr[j * 2 + 1] = node(cc);
				break;
			}
		}
	}
	preorder(1);
	printf("\n");
	inorder(1);
	printf("\n");
	postorder(1);
	printf("\n");




}