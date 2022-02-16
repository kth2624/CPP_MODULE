/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:51:36 by tkim              #+#    #+#             */
/*   Updated: 2022/02/17 02:28:02 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern test;
	Form* rrf;
	std::cout<<std::endl <<"-------- throw case ------------------------------" << std::endl << std::endl;
	{
		try
		{
			rrf = test.makeForm("robotomy requesst", "Bender");
			Bureaucrat tkim("tkim", 1);
			tkim.signForm(*rrf);
			std::cout << tkim << std::endl;
			std::cout << *rrf << std::endl;
			tkim.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout<<std::endl <<"-------- robotomy case ------------------------------" << std::endl << std::endl;
	{
		try
		{
			rrf = test.makeForm("robotomy request", "Bender");
			Bureaucrat tkim("tkim", 1);
			tkim.signForm(*rrf);
			std::cout << tkim << std::endl;
			std::cout << *rrf << std::endl;
			tkim.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout<<std::endl <<"-------- presidential case ------------------------------" << std::endl << std::endl;

	{
		try
		{
			rrf = test.makeForm("presidential pardon", "Bender");
			Bureaucrat tkim("tkim", 1);
			tkim.signForm(*rrf);
			std::cout << tkim << std::endl;
			std::cout << *rrf << std::endl;
			tkim.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout<< std::endl <<"-------- shrubbery case ------------------------------" << std::endl << std::endl;
	{
		try
		{
			rrf = test.makeForm("shrubbery creation", "Tree");
			Bureaucrat tkim("tkim", 1);
			tkim.signForm(*rrf);
			std::cout << tkim << std::endl;
			std::cout << *rrf << std::endl;
			tkim.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	delete rrf;
	system("leaks Intern > a");
	return 0;
}