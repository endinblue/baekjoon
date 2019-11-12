#pragma warning(disable : 4996)

#include<iostream>
#include <cstdio>
#include<string>
#include <queue>


using namespace std;

int main() {
	priority_queue <int> pq;
	int n;
	scanf("%d", &n);
	int qq;

	for (int i = 0; i < n; i++) {
		scanf("%d", &qq);
		if (qq == 0) {
			if (pq.empty()) {
				cout << 0 << endl;
			}
			else {
				cout << pq.top() << endl;
				pq.pop();
			}
		}

		else
			pq.push(qq);
	}

}