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
			cout << "타임 오버!" << endl << "총 입력한 단어 개수 : " << vocnum << endl;
			break;
		}
			cout << "다음 단어를 입력하세요! ";
			cin >> nextvoc;

			int n = voc.size();
			if (voc[n - 1] == nextvoc[0]) {
				fvoc = fvoc + "->" + nextvoc;
				cout << fvoc << endl;
				voc = nextvoc;
				vocnum++;
			}
			else {
				cout << "잘못된 입력입니다" << endl;
			}
	}
	return 0;
}