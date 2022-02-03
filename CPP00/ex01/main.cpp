#include "Phonebook.hpp"

void suppot(void)
{
	std::cout <<"---------------------------------------------" << std::endl;
	std::cout <<"-------------Phonebook-----------------------" << std::endl;
	std::cout <<"---------------------------------------------" << std::endl;
	std::cout <<"------1.EXIT---------------------------------" << std::endl;
	std::cout <<"------2.ADD----------------------------------" << std::endl;
	std::cout <<"------3.SEARCH-------------------------------" << std::endl;
	std::cout <<"---------------------------------------------" << std::endl;

}

int main(void)
{
	std::string input;
	int num;
	Phonebook book;

	num = 0;
	while(1)
	{
		suppot();
		std::getline(std::cin, input);
		if(input == "1" || input == "EXIT")
		{
			return (0);
		}
		else if(input == "2" || input == "ADD")
		{
			book.add();

		}else if(input == "3" || input == "SEARCH")
		{
			book.print_info();
			std::cout << "show ? index ? -> input num!!" << std::endl;
			std::getline(std::cin, input);
			if (book.get_index() < atoi(input.c_str()) || 0 >= atoi(input.c_str()))
				continue;
			std::cout << "---------------------------------------------"<<std::endl;
			std::cout << "|     index|first name| last name| nick name|"<<std::endl;
			std::cout << "---------------------------------------------"<<std::endl;
			book.oneline(atoi(input.c_str())-1);

		}
		std::cout << std::endl << std::endl;
	}
	return 0;
}