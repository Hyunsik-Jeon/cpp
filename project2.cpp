#include<iostream>
#include<ctime>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
	string voc = "airplane";
	string fvoc = "airplane";
	string nextvoc;
	int vocnum = 0;

	cout << fvoc << endl;
	clock_t startTime = clock();
	
	while (1) {
		clock_t endTime = clock();
		int time = (endTime - startTime) / CLOCKS_PER_SEC;
		if (time >= 5) {
			int n = voc.size();
			if(voc[n - 1] == nextvoc[0]){
				vocnum--;
			}
			cout << "Ÿ�� ����!" << endl << "�� �Է��� �ܾ� ���� : " << vocnum << endl;
			break;
		}
			cout << "���� �ܾ �Է��ϼ���! ";
			cin >> nextvoc;

			int n = voc.size();
			if (voc[n - 1] == nextvoc[0]) {
				fvoc = fvoc + "->" + nextvoc;
				cout << fvoc << endl;
				voc = nextvoc;
				vocnum++;
			}
			else {
				cout << "�߸��� �Է��Դϴ�" << endl;
			}
	}
	return 0;
}