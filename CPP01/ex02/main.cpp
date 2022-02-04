#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = str;

	stringPTR = &str;
	std::cout << "ptr, ref 변환시작" << std::endl;
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << "정상 문자열 출력" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return 0;
}