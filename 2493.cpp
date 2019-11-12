#pragma warning (disable:4996);
#include <stack>
#include <cstdio>
#define baekjoon 2493

using namespace std;

int main() {
	int n,num;
	stack<int> st;
	scanf("%d", &n);
	int *arr = new int[n + 1];
	arr[0] = 2000000000;
	st.push(0);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		while (arr[st.top()]<arr[i]) {
			st.pop();
		}
		printf("%d ", st.top());
		st.push(i);
	}
}