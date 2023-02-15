#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int num, num1, cs, count = 1;

	while (count != 31) {
		cout << "숫자를 입력해주세요!(물론 1~3까지!)" << " ";
		cin >> num;

		cs = count;
		for (int i = cs; i < (num + cs); i++) {
			cout << i << endl;
			count++;
		}
		if (count >= 31) {
			cout << "제가 이겼습니다ㅎㅎ" << endl;
			break;
		}

		cs = count;
		srand(time(NULL));
		num1 = rand() % 3 + 1;
		cout << "그렇다면 저는!"<<endl;
		for (int i = cs + 1; i <= (num1 + cs); i++) {
			cout << i << " ";
			count++;
		}
		if (count >= 31) {
			cout << "제가 졌습니다ㅜㅜ" << endl;
			break;
		}
	}
}