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

	cout << "���ڴ� 1 ~ 25������ ���ڸ� �Է��� �� �ֽ��ϴ�." << endl;
	for (int i = 0; i < 6; i++) {
		cout << i + 1 << "��° ��ȣ�� �Է��ϼ��� : ";
		cin >> i_arr[i];
		for (int j = 0; j < i; j++) {
			if (i_arr[i] == i_arr[j]) {
				cout << "�̹� �Էµ� �����Դϴ�." << endl;
				i--;
			}
		}
		if (i_arr[i] > 25) {
			cout << "�߸��� �����Դϴ�. �ٽ� �Է��� �ּ���." << endl;
			i--;
		}
	}
	cout << "��÷��ȣ ����!"<<endl;
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
			cout << "�߸��� �����Դϴ�. �ٽ� �Է��� �ּ���." << endl;
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
	cout << "1~7����� ����� ���� �� �ֽ��ϴ�!" << endl;
	cout << "��� : " << 7 - same_num << "�� �Դϴ�!";

}