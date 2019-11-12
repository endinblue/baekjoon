#pragma warning(disable: 4996)
#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int ascore = 0, bscore = 0;
	int flag = 0;
	int adeck[10], bdeck[10];

	for (int i = 0; i < 10; i++) {
		cin >> adeck[i];
	}

	for (int i = 0; i < 10; i++) {
		cin >> bdeck[i];
	}

	for (int i = 0; i < 10; i++) {
		if (adeck[i] > bdeck[i]) {
			ascore += 3;
			flag = 1;
		}
		else if (adeck[i] < bdeck[i]) {
			bscore += 3;
			flag = -1;

		}
		else {
			ascore++;
			bscore++;
		}
	}

	cout << ascore << ' ' << bscore << endl;
	
	if (ascore > bscore)
		cout << 'A' << endl;
	else if (bscore > ascore)
		cout << 'B' << endl;
	else {
		if (flag == 1) {
			cout << 'A' << endl;
		}
		else if (flag == -1)
			cout << 'B' << endl;
		else cout << 'D' << endl;
	}

}