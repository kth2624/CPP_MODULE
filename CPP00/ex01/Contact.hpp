#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		void input_info(void);
		std::string get_fname(void);
		std::string get_lname(void);
		std::string get_nname(void);
		std::string get_pnumber(void);
		~Contact();

};

#endif