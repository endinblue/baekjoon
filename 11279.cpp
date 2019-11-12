#include<iostream>
#include<string>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack <int> s;
	int temp;
	for (int i = 0; i < n; i++) {
		string order;
		cin >> order;
		int num = 0;
		if (order == "push")
			num = 1;
		else if (order == "top")
			num = 2;
		else if (order == "size")
			num = 3;
		else if (order == "empty")
			num = 4;
		else if (order == "pop")
			num = 5;

		switch (num) {
		case 1: 
			cin >> temp;
			s.push(temp);
			break;
		case 2:
			if (s.empty())
				cout << -1 << endl;
			else cout << s.top() << endl;
			break;
		case 3:
			cout << s.size() << endl;
			break;
		case 4 :
			if (s.empty())
				cout << 1 << endl;

			else cout << 0 << endl;
			break;
	
		case 5:
			if (s.empty())
			cout << -1 << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}
			break;

		}
	}
}