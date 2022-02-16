/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:57:56 by tkim              #+#    #+#             */
/*   Updated: 2022/02/17 01:45:16 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "iostream"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{ 
	private:
	public:
		Intern();
		Intern(const Intern& obj);
		~Intern();
		Intern& operator=(const Intern&);
		Form* makeForm(std::string form, std::string target);
	class UnKnownException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
#endif
