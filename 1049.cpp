#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque <int> dq;

	int cnt = 0;
	int s, n;
	cin >> s >> n;

	for (int i = 1; i <= s; i++)
		dq.push_back(i);

	for (int i = 0; i < n; i++) {
		int val;
		int index = 0;
		cin >> val;
		int move = 0;
		while (dq.front() != val) {
			move++;
			int temp = dq.front();
			dq.pop_front();
			dq.push_back(temp);
		}
		move > dq.size() - move ? cnt += (dq.size() - move) : cnt += move;
		dq.pop_front();
	}

	cout << cnt;
}
