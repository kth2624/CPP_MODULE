#include "Karen.hpp"

int main(int argc, char *argv[])
{
	if(argc != 2)
	{	
		std::cout << "arg error ^^ retry! " << std::endl;
		return 0;
	}
	std::string value(argv[1]);
	if(value != "debug" && value != "info" && value != "warning" && value != "error")
	{
		std::cout << "Probably complaining about insignificant problems" << std::endl;
		return 0;
	}
	Karen karen;

	karen.complain("debug",value);
	karen.complain("info",value);
	karen.complain("warning",value);
	karen.complain("error",value);
	return 0;
}