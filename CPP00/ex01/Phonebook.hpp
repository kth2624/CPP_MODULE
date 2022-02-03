#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <cstring>
#include <cstdlib>

class Phonebook{
	private:
		Contact con[8];
		int index;

	public:
		Phonebook();
		void print_info(void);
		void oneline(int i);
		int get_index(void);
		void add(void);
		std::string check_length(std::string str);
		~Phonebook();
};

#endif
