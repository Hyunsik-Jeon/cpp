#include<iostream>
#include<string>

int main() {
	int age;

	std::cout << "���̸� �Է��ϼ���.";
	std::cin >> age;
	if (age >= 20) {
		std::cout << "����";
	}
	else if (age >= 17) {
		std::cout << "����л�";
	}
	else if (age >= 14) {
		std::cout << "���л�";
	}
	else if (age >= 8) {
		std::cout << "�ʵ��л�";
	}
	else {
		std::cout << "����";
	}
	std::cout << std::endl;
	std::cout << "---------------------------";
	std::cout << std::endl;

	std::string name;

	std::cout << "�̸��� �Է��ϼ���.";
	std::cin >> name;
	if (name == "ȫ�浿") {
		std::cout << "����";
	}
	else if (name == "������") {
		std::cout << "����";
	}
	else {
		std::cout << "�𸣰ھ��";
	}
	std::cout << std::endl;
	std::cout << "---------------------------";
	std::cout << std::endl;
	int a;

	std::cout << "���ڸ� �Է��ϼ���.";
	std::cin >> a;
	(a % 5 == 0) ? std::cout << "5�� ����Դϴ�." : std::cout << "5�� ����� �ƴմϴ٤̤�";
	std::cout << std::endl;
	std::cout << "---------------------------";
	std::cout << std::endl;

	int a1;
	int a2;
	std::string oper;
	std::cout << "������ ���� �� ���� �Է��ϼ���.";
	std::cin >> a1;
	std::cin >> a2;
	std::cout << "�����ڸ� �Է��ϼ���.";
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

