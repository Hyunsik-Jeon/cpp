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
		cout << "�߱�����" << endl << "1 ~ 9 ������ ���� 3���� �Է��Ͻÿ� (�̿��� ����: ����)" << endl;
		cin >> i_arr[0] >> i_arr[1] >> i_arr[2];
		if (i_arr[0] > 9 || i_arr[1] > 9 || i_arr[2] > 9) {
			cout << "������ �����Ͽ����ϴ�" << endl;
			break;
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < i; j++) {
				if (i_arr[i] == i_arr[j]) {
					cout << "�ߺ��� �����Դϴ�!"<<endl;
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
			cout << count << "�� ���� ������ϴ�.";
			break;
		}
	}
}