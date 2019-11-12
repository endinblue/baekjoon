#pragma warning(disable:4996) 
#include <cstdio>
#include <malloc.h>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	printf("%d\n", t / 5 + t / 25 + t / 125);
}