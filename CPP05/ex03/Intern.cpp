/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:57:52 by tkim              #+#    #+#             */
/*   Updated: 2022/02/17 02:09:02 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
Form *ppCreate(std::string const &target)
{
	return new PresidentialPardonForm(target);
}
Form *rrCreate(std::string const &target)
{
	return new RobotomyRequestForm(target);
}
Form *scCreate(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Intern::Intern()
{
	
}

Intern::Intern(const Intern&)
{

}

Intern::~Intern()
{

}

Intern& Intern::operator=(const Intern&)
{
	return *this;
}

Form* Intern::makeForm(std::string form, std::string target)
{
	std::string tName[3];
	tName[0] = "presidential pardon";
	tName[1] = "robotomy request";
	tName[2] = "shrubbery creation";
	Form *temp = 0;
	//함수 포인터 문법
	//Return_Type (* pointer_name)(Argument_List)
	//void (*f)();
	Form* (*fn[3])(std::string const &target) ={
		&ppCreate,
		&rrCreate,
		&scCreate,
	};

	for(int i = 0; i < 3; i++)
	{
		if(tName[i] == form)
			temp = fn[i](target);
	}
	if(!temp)
		throw Intern::UnKnownException();
	else
		return temp;
}

const char* Intern::UnKnownException::what() const throw()
{
	return "Unknown target.";
};