/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:51:36 by tkim              #+#    #+#             */
/*   Updated: 2022/02/16 00:04:28 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat test1("tkim",1);
	Bureaucrat test2("intra",150);
	Form formTest("jip",3,150);
	Form formTest2("jip2",3,150);
	std::cout << test1 << std::endl;
	std::cout << test2 << std::endl;
	std::cout << formTest << std::endl;
	std::cout << "-------------sign OK -----------" << std::endl;
	
	try
	{
		formTest.beSigned(test1);
		std::cout << formTest << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------sign Fail -----------" << std::endl;
	try
	{
		std::cout << formTest2 << std::endl;
		formTest.beSigned(test2);
		
	}
	catch(const std::exception& e)
	{
		std::cout << formTest2 << std::endl;
		std::cerr << e.what() << '\n';
	}


	std::cout << "-------------ex00 -----------" << std::endl;
	try
	{
		std::cout << test1 << std::endl;
		test1.increment();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		Bureaucrat TooHigh("TooHigh",0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat TooLow("TooLow",151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Bureaucrat test3("42seoul",42);

	try
	{
		std::cout << test3 << std::endl;
		test3.increment();
		std::cout << test3 << std::endl;
		test3.decrement();
		std::cout << test3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}