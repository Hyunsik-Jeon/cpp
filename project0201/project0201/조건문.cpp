#include<iostream>
#include<string>
/*
int main() {

	if (5 > 3) {
		std::cout << "얍\n";
	}

	int a;
	std::cin >> a;
	if (a < 10) {
		std::cout << "입력한 수가 10보다 작습니다.";
	}
	else if (a == 10) {
		std::cout << "10을 입력하셨군요!";
	}
	else {
		std::cout << "입력한 수가 10보다 큽니다.";
	}


	int a;
	std::cin >> a;
	if (a >100 || a<0) {
		std::cout << "입력값이 잘못되었습니다.";
	}
	else if (a>=90) {
		std::cout << "A";
	}
	else if (a >= 80) {
		std::cout << "B";
	}
	else if (a >= 70) {
		std::cout << "C";
	}
	else if (a >= 60) {
		std::cout << "D";
	}
	else {
		std::cout << "F";
	}
	

	//중첩된 if문
	std::string userId, userPw;
	std::string inputId = "user01", inputPw = "1234";
	std::cout << "아이디를 입력해주세요.";
	std::cin >> userId;
	std::cout << "비밀번호를 입력해주세요.";
	std::cin >> userPw;

	if (userId == inputId) {
		if (userPw == inputPw) {
			std::cout << "로그인 성공!!!\n";
		}
		else {
			std::cout << "비밀번호가 틀렸습니다\n로그인 실패!!\n";
		}
	}
	else {
		std::cout << "아이디가 틀렸습니다\n로그인 실패!!\n";
	}
	*/
	//switch문
	/*
	int a;
	std::cin >> a;
	
	switch (a) {
	case 3:
		std::cout << "3입니다.";
		break;
	case 5:
		std::cout << "5입니다";
		break;
	default:
		std::cout << "예상한 수가 아닙니다...";
	}
	
	char grade;
	switch (a/9) {
	case 9:
		std::cout << "A";
		grade = 'A';
	case 8:
		std::cout << "B";
		grade = 'B';
	case 7:
		std::cout << "C";
		grade = 'C';
	case 6:
		std::cout << "D";
		grade = 'D';
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		std::cout << "F";
		grade = 'F';
		break;
	default:
		std::cout << "점수의 범위는 0~99입니다";
	}
	std::cout << std::endl;
	grade == 'F' ? std::cout << "재수강" : std::cout << "참 잘했어요.";
	std::cout << std::endl;
	if (grade == 'F') {
		std::cout << "재수강";
	}
	else {
		std::cout << "참 잘했어요";
	}
	*/
	/*
	if (a % 2 == 1) {
		std::cout << "홀수 ";
	}
	else {
		std::cout << "짝수";
	}
	std::cout << std::endl;
	(a % 2 == 1) ? std::cout << "홀수" : std::cout << "짝수";
}
*/