#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string s;
	stack<char> box;
	int result=0, mul = 1;

   	cin >> s;

	for (int i = 0; i < s.size(); i++) {

		if (s[i] == '('||s[i]=='[') {
			
			box.push(s[i]);
			s[i] == '(' ? mul *= 2 : mul *= 3;
		
		}

		else {
		
			if (box.empty()) {
				cout << 0 << endl;
				return 0;
			}
		
			if((s[i]==')'&&box.top()=='[')||(s[i]==']'&&box.top()=='(')){
				cout << 0 << endl;
				return 0;
			}

			else {
				if (!(s[i - 1] == ')' || s[i - 1] == ']'))
					result += mul;
				box.pop();
				s[i] == ')' ? mul /= 2 : mul /= 3;	
			}

		}
	}
	
	if (!box.empty())
		cout << 0 << endl;
	
	else
		cout << result << endl;

}