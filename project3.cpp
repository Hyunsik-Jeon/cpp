#include<iostream>
#include <cstdlib>
#include <ctime>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int num, c_num;
	int same_num = 0;
	int i_arr[6], c_arr[6];

	cout << "숫자는 1 ~ 25까지의 숫자만 입력할 수 있습니다." << endl;
	for (int i = 0; i < 6; i++) {
		cout << i + 1 << "번째 번호를 입력하세요 : ";
		cin >> i_arr[i];
		for (int j = 0; j < i; j++) {
			if (i_arr[i] == i_arr[j]) {
				cout << "이미 입력된 숫자입니다." << endl;
				i--;
			}
		}
		if (i_arr[i] > 25) {
			cout << "잘못된 숫자입니다. 다시 입력해 주세요." << endl;
			i--;
		}
	}
	cout << "당첨번호 공개!"<<endl;
	for (int i = 0; i < 6; i++) {
		num = rand();
		c_num = num % 25 + 1;
		c_arr[i] = c_num;
		for (int j = 0; j < i; j++) {
			if (c_arr[i] == c_arr[j]) {
				i--;
			}
		}
		if (i_arr[i] > 25) {
			cout << "잘못된 숫자입니다. 다시 입력해 주세요." << endl;
			i--;
		}
		cout << c_arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (i_arr[i] == c_arr[j]) {
				same_num++;
			}
		}
	}
	cout << "1~7등까지 결과가 나올 수 있습니다!" << endl;
	cout << "결과 : " << 7 - same_num << "등 입니다!";

}