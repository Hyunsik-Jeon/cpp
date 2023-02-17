#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int n;
	
	cout << "마방진의 행 혹은 열의 수를 자연수로 입력해주세요 ";
	cin >> n;

	if (n > 0) {
		int x = 0;
		int y = n / 2;
		int aa;

		int** num_arr = new int* [n];
		for (int i = 0; i < n; i++) {
			num_arr[i] = new int[n];
		}
		for (int i = 1; i < (n * n)+1; i++) {
			num_arr[x][y] = i;
			aa = i % n;
			if (aa == 0) {
				x++;
			}
			else {
				if (--x < 0) {
					x = n-1;
				}
				if (++y == n) {
					y = 0;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << num_arr[i][j] << " ";
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
