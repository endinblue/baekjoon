#include <string>
#include <iostream>
using namespace std;
int arr[1000];
int main() {
	string r1, r2;
	cin >> r1 >> r2;
	//입력 받기. string으로 받음
	//로마숫자 -> char

	arr[(int)('I')] = 1;
	arr[(int)('V')] = 5;
	arr[(int)('X')] = 10;
	arr[(int)('L')] = 50;
	arr[(int)('C')] = 100;
	arr[(int)('D')] = 500;
	arr[(int)('M')] = 1000;
	//각문자가 뜻하는 값이 얼마인지 바로 확인이 필요함
	//배열을 만들었어요
	//배열의 index는 숫자만가능한다. 문자는 숫자가 아니다. 따라서 char -> int로 바꿔주는 과정필요
	//ascii코드사용 (int)('문자')
	//각 알파벳이 가르키는 숫자가 얼마인지 배열에 저장.

	int total1=0, total2 = 0; //각 string이 가지는 숫자값
	int before = 0; //로마숫자 표기법에 따라 앞에 숫자가 가지는 값이 중요하므로 비교하기 위한 변수생성.
	

	for (int i = 0; i < r1.length(); i++) {	//string1의 각글자마다 검사하겠다.
		
		int temp = arr[(int)(r1[i])];	
		// r1[i] = string1의 i번째 글자
		// (int)r1[i] = string1의 i번째 글자를 아스키코드 값을 얻어냄.
		// arr[(int)r1[i]] = string1의 i번째 글자의 아라비아 숫자값. = temp
		//string a, a[i] => a의 i번째 글자 


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
	}	//string1과 string2의 아라비앗 숫자값을 얻음

	cout << total1 + total2 << endl;


	int answer = total1 + total2;
	
	string roma = "";
	//string +연산이 가능. string1 = 찎찍 string2 = 쥐 string1+string = 찎직쥐
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