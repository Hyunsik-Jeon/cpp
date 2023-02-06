#include<iostream>
#include<string>

int main() {
	int age;

	std::cout << "나이를 입력하세요.";
	std::cin >> age;
	if (age >= 20) {
		std::cout << "성인";
	}
	else if (age >= 17) {
		std::cout << "고등학생";
	}
	else if (age >= 14) {
		std::cout << "중학생";
	}
	else if (age >= 8) {
		std::cout << "초등학생";
	}
	else {
		std::cout << "유아";
	}
	std::cout << std::endl;
	std::cout << "---------------------------";
	std::cout << std::endl;

	std::string name;

	std::cout << "이름을 입력하세요.";
	std::cin >> name;
	if (name == "홍길동") {
		std::cout << "남자";
	}
	else if (name == "성춘향") {
		std::cout << "여자";
	}
	else {
		std::cout << "모르겠어요";
	}
	std::cout << std::endl;
	std::cout << "---------------------------";
	std::cout << std::endl;
	int a;

	std::cout << "숫자를 입력하세요.";
	std::cin >> a;
	(a % 5 == 0) ? std::cout << "5의 배수입니다." : std::cout << "5의 배수가 아닙니다ㅜㅜ";
	std::cout << std::endl;
	std::cout << "---------------------------";
	std::cout << std::endl;

	int a1;
	int a2;
	std::string oper;
	std::cout << "연산할 정수 두 개를 입력하세요.";
	std::cin >> a1;
	std::cin >> a2;
	std::cout << "연산자를 입력하세요.";
	std::cin >> oper;
	if (oper == "+") {
		std::cout << a1 + a2 << std::endl;
	}
	else if (oper == "-") {
		std::cout << a1 - a2 << std::endl;
	}
	else if (oper == "*") {
		std::cout << a1 * a2 << std::endl;
	}
	else if (oper == "/") {
		std::cout << a1 / a2 << std::endl;
	}


}

