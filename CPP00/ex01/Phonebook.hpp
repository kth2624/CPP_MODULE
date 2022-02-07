/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:19:36 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:19:58 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
