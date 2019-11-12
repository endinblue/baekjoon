#pragma warning(disable:4996)
//#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	while (getline(cin, s)) {
		//getline(std::cin, s);
		cout << s << endl;
	}

}