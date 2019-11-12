#include <stack>
#include <iostream>

using namespace std;

int main() {

	stack<int> st;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		st.push(temp);
	}

	int big = 0;
	int total = 0;
	for (int i = 0; i < n; i++) {
		int temp = st.top();
		st.pop();
		if (temp > big) {
			big = temp;
			total++;
		}
	}

	cout << total;
}