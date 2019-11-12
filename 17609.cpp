#include <stack>
#include <iostream>
#include <string>

using namespace std;

bool pal(string s) {
	for (int i = 0; i < s.size()/2; i++) {
		if (s[i] != s[s.size() - i-1])
			return false;
	}
	return true;
}
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string x;
		cin >> x;
		int answer = 100;
		for (int i = 0; i < x.size() / 2; i++) {
			if (x[i] != x[x.size() - i-1]) {
				if ((pal(x.substr(i, x.size() - 2*i-1)) || pal(x.substr(i+1, x.size() - 2*i-1))) == true) {
					answer = 1;
					break;
				}
				else {
					answer = 2; break;
				}
			}
		}
		if (answer == 100)
			answer = 0;
		cout << answer << endl;
	}
}