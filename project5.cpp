#include<iostream>
#include<ctime>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int c_arr[3], i_arr[3];
	int strike = 0, ball = 0,count = 0;

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 3; i++) {
		c_arr[i] = rand() % 9 + 1;
		for (int j = 0; j < i; j++) {
			if (c_arr[i] == c_arr[j]) {
				i--;
			}
		}
	}

	while (1) {
		cout << "야구게임" << endl << "1 ~ 9 사이의 숫자 3개를 입력하시오 (이외의 숫자: 종료)" << endl;
		cin >> i_arr[0] >> i_arr[1] >> i_arr[2];
		if (i_arr[0] > 9 || i_arr[1] > 9 || i_arr[2] > 9) {
			cout << "게임을 종료하였습니다" << endl;
			break;
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < i; j++) {
				if (i_arr[i] == i_arr[j]) {
					cout << "중복된 숫자입니다!"<<endl;
					continue;
				}
			}
		}

		strike, ball = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (c_arr[i] == i_arr[j]) {
					if (i == j) {
						strike++;
					}
					else {
						ball++;
					}
				}
			}
		}
		count++;
		cout << "Strike : " << strike << " " << "Ball : " << ball << endl;
		if (strike >= 3) {
			cout << count << "번 만에 맞췄습니다.";
			break;
		}
	}
}