#pragma warning(disable:4996)
//#include <Windows.h>
#include <string>
#include <iostream>
#include <queue>
using namespace std;


int main() {
	queue <int> box;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int m;
			cin >> m;
			box.push(m);
		}
		else if (s == "front") {
			if (box.size() == 0)
				cout << -1 << endl;
			else cout << box.front() << endl;
		}
		else if (s == "back") {
			if (box.size() == 0)
				cout << -1 << endl;
			else cout << box.back() << endl;
		}
		else if (s == "size") {
			cout << box.size() << endl;
		}
		else if (s == "pop") {
			if (box.size() == 0)
				cout << -1 << endl;
			else {
				cout << box.front() << endl;
				box.pop();
			}
		}
		else {
			if (box.empty())
				cout << 1 << endl;
			else cout << 0 << endl;
		}



	}
	//system("pause");
}