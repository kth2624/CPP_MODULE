#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}
void Contact::input_info(void)
{
	std::cout << "first name     : ";
	getline(std::cin,this->first_name);
	std::cout << "last name      : ";
	getline(std::cin,this->last_name);
	std::cout << "nick name      : ";
	getline(std::cin,this->nick_name);
	std::cout << "phone number   : ";
	getline(std::cin,this->phone_number);
	std::cout << "darkest secret : ";
	getline(std::cin,this->darkest_secret);
}

std::string Contact::get_fname(void)
{
	return this->first_name;
}

std::string Contact::get_lname(void)
{
	return this->last_name;
}
std::string Contact::get_nname(void)
{
	return this->nick_name;
}
std::string Contact::get_pnumber(void)
{
	return this->phone_number;
}