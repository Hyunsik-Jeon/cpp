#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int num, num1, cs, count = 1;

	while (count != 31) {
		cout << "���ڸ� �Է����ּ���!(���� 1~3����!)" << " ";
		cin >> num;

		cs = count;
		for (int i = cs; i < (num + cs); i++) {
			cout << i << endl;
			count++;
		}
		if (count >= 31) {
			cout << "���� �̰���ϴ٤���" << endl;
			break;
		}

		cs = count;
		srand(time(NULL));
		num1 = rand() % 3 + 1;
		cout << "�׷��ٸ� ����!"<<endl;
		for (int i = cs + 1; i <= (num1 + cs); i++) {
			cout << i << " ";
			count++;
		}
		if (count >= 31) {
			cout << "���� �����ϴ٤̤�" << endl;
			break;
		}
	}
}