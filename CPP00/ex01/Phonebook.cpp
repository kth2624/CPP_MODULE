#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
}
Phonebook::~Phonebook()
{

}

int Phonebook::get_index(void)
{
	return this->index;
}

std::string Phonebook::check_length(std::string str)
{
	if(str.length() > 10)
		return (str.substr(0,9)+'.');
	return (str);
}

void Phonebook::oneline(int i)
{
	if (i >= 8 || i >= this->index || i < 0)
		return ;
	std::cout << "|";
	std::cout << std::setw(10) << i + 1;
	std::cout << "|";
	std::cout << std::setw(10) << check_length(this->con[i].get_fname());
	std::cout << "|";
	std::cout << std::setw(10) << check_length(this->con[i].get_lname());
	std::cout << "|";
	std::cout << std::setw(10) << check_length(this->con[i].get_nname());
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------"<<std::endl;
}
void Phonebook::print_info(void)
{
	int i;

	i = 0;
	std::cout << "---------------------------------------------"<<std::endl;
	std::cout << "|     index|first name| last name| nick name|"<<std::endl;
	std::cout << "---------------------------------------------"<<std::endl;
	while(i < this->index)
	{
		oneline(i);
		i++;
	}
}

void Phonebook::add(void)
{
	con[this->index % 8].input_info();
	this->index++;
}