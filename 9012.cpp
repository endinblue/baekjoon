#pragma warning(disable : 4996)

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

	int n;
	
	bool flag = true;
	cin >> n;

	for (int i = 0; i < n; i++) {
		stack <char> s;
		string temp;
		cin >> temp;
		flag = true;
		for (int j = 0; j < temp.size(); j++) {
			if (temp[j] == '(') {
				s.push(temp[j]);
				
			}

			else {
				if (s.empty()) {
					cout << "NO\n";
					flag = false;
					break;
				}
				else { s.pop(); 
				
				}

			}
		}
		if (s.empty()&&flag)
		cout << "YES\n";

		else if (flag) {
			cout << "NO\n";
			
		}
	
	}
	
	
}