#include <string>
#include <iostream>
using namespace std;
int arr[1000];
int main() {
	string r1, r2;
	cin >> r1 >> r2;
	//�Է� �ޱ�. string���� ����
	//�θ����� -> char

	arr[(int)('I')] = 1;
	arr[(int)('V')] = 5;
	arr[(int)('X')] = 10;
	arr[(int)('L')] = 50;
	arr[(int)('C')] = 100;
	arr[(int)('D')] = 500;
	arr[(int)('M')] = 1000;
	//�����ڰ� ���ϴ� ���� ������ �ٷ� Ȯ���� �ʿ���
	//�迭�� ��������
	//�迭�� index�� ���ڸ������Ѵ�. ���ڴ� ���ڰ� �ƴϴ�. ���� char -> int�� �ٲ��ִ� �����ʿ�
	//ascii�ڵ��� (int)('����')
	//�� ���ĺ��� ����Ű�� ���ڰ� ������ �迭�� ����.

	int total1=0, total2 = 0; //�� string�� ������ ���ڰ�
	int before = 0; //�θ����� ǥ����� ���� �տ� ���ڰ� ������ ���� �߿��ϹǷ� ���ϱ� ���� ��������.
	

	for (int i = 0; i < r1.length(); i++) {	//string1�� �����ڸ��� �˻��ϰڴ�.
		
		int temp = arr[(int)(r1[i])];	
		// r1[i] = string1�� i��° ����
		// (int)r1[i] = string1�� i��° ���ڸ� �ƽ�Ű�ڵ� ���� ��.
		// arr[(int)r1[i]] = string1�� i��° ������ �ƶ��� ���ڰ�. = temp
		//string a, a[i] => a�� i��° ���� 


		if (before < temp) {
			total1 += temp;
			total1 -= before;
			total1 -= before;
		}
		else total1 += temp;
		before = temp;
	}

	before = 0;

	for (int i = 0; i < r2.length(); i++) {
		int temp = arr[(int)(r2[i])];
		if (before < temp) {
			total2 += temp;
			total2 -= before;
			total2 -= before;
		}
		else total2 += temp;
		before = temp;
	}	//string1�� string2�� �ƶ��� ���ڰ��� ����

	cout << total1 + total2 << endl;


	int answer = total1 + total2;
	
	string roma = "";
	//string +������ ����. string1 = ���� string2 = �� string1+string = ������
	int i = 0;
	int val[7] = { 1000,500,100,50,10,5,1 };
	char charval[] = { 'M','D','C','L','X','V','I' };
	
	
	//1990
	//990
	// 990 / 100 = 9
	//900 = 1000 - 100 =CM
	while (answer > 0) {
		int x = answer / val[i];
		answer -= val[i] * x;
		if (x == 9) {
			roma = roma + charval[i] + charval[i - 2];
		}

		//800,700,600,500
		else if (x <= 8 && x >= 5) {
			int temp = x % 5;
			roma += charval[i - 1];
			for (int j = 0; j < temp; j++) {
				roma += charval[i];
			}
		}
		
		else if (x == 4) {
			roma = roma + charval[i] + charval[i - 1];
		}


		else {
			for (int j = 0; j < x; j++)
				roma += charval[i];
		}
		i=i+2;
	}
	cout << roma << endl;
}