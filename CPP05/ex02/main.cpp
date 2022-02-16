/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:51:36 by tkim              #+#    #+#             */
/*   Updated: 2022/02/17 02:25:46 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void	PresidentialPardonFormTest1()
{
	try
	{
		Bureaucrat bureaucrat("presi", 2);
		PresidentialPardonForm  president("pardon");
		bureaucrat.signForm(president);
		std::cout << president << std::endl;
		bureaucrat.executeForm(president);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	PresidentialPardonFormTest2()
{
	try
	{
		Bureaucrat bureaucrat("presisisisi", 10);
		PresidentialPardonForm  president("pardon huh!");
		bureaucrat.signForm(president);
		std::cout << president << std::endl;
		bureaucrat.executeForm(president);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
int main(void)
{
	std::cout << std::endl << "---------Robotomy test --------> " << std::endl;
	Bureaucrat test("tkim",44);
	Bureaucrat test2("intra",100);
	RobotomyRequestForm RoboForm("robo");
	std::cout << test << std::endl;
	std::cout << test2 << std::endl;
	test.executeForm(RoboForm);
	test2.executeForm(RoboForm);
	test.signForm(RoboForm);
	test.executeForm(RoboForm);


	std::cout << std::endl << "---------Presidential test --------> " << std::endl;
	PresidentialPardonFormTest1();
	PresidentialPardonFormTest2();

	std::cout << std::endl;
	std::cout << std::endl << "---------shrubbery test --------> " << std::endl;
	Bureaucrat test3("tkim",5);
	Bureaucrat test4("intra",26);
	ShrubberyCreationForm shru("bbery");
	std::cout << test3 << std::endl;
	std::cout << test4 << std::endl;
	test3.executeForm(shru);
	test4.executeForm(shru);
	test3.signForm(shru);
	test3.executeForm(shru);
	system("leaks Forms > a");

	return 0;
}