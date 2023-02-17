#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int n;
	int num = 1;
	cout << "마방진의 행 혹은 열의 수를 자연수로 입력해주세요 ";
	cin >> n;

	if (n > 0) {
		int** num_arr = new int* [n];
		for (int i = 0; i < n; i++) {
			num_arr[i] = new int[n];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n/2 + 1; j++) {
				num_arr[i][j] = num;
				cout << num_arr[i][j] << " ";
				num = num + 1;
			}
			cout << endl;
		}
		for (int i = 0; i < n; i++) {
			delete[] num_arr[i];
		}
		delete[] num_arr;
	}
	else {
		cout << "ERROR" << endl;
	}
}