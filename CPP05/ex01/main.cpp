/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:51:36 by tkim              #+#    #+#             */
/*   Updated: 2022/02/17 02:51:58 by tkim             ###   ########.fr       */
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
	std::cout << formTest << std::endl<<std::endl;;
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
		formTest2.beSigned(test2);
		
	}
	catch(const std::exception& e)
	{
		std::cout << formTest2 << std::endl;
		std::cerr << e.what() << '\n';
	}


	std::cout << "------------------ex00 ----------------" << std::endl;
{
	Bureaucrat test1("tkim",1);
	Bureaucrat test2("intra",150);
	std::cout << test1 << std::endl;
	std::cout << test2 << std::endl;
	std::cout<< std::endl <<"-------- increment throw case ------------------------------" << std::endl << std::endl;
	try
	{
		std::cout << test1 << std::endl;
		test1.increment();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout<< std::endl <<"-------- TooHigh throw case ('TooHihg',0) ------------------------------" << std::endl << std::endl;

	try
	{
		Bureaucrat TooHigh("TooHigh",0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout<< std::endl <<"-------- TooLow throw case ('TooLow',151)------------------------------" << std::endl << std::endl;
	
	try
	{
		Bureaucrat TooLow("TooLow",151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout<< std::endl <<"-------- increment ,decrement case ------------------------------" << std::endl << std::endl;
	Bureaucrat test3("42seoul",42);

	try
	{
		std::cout << test3 << std::endl;
		std::cout << "increment " << std::endl;
		test3.increment();
		std::cout << test3 << std::endl;
		std::cout << "decrement " << std::endl;
		test3.decrement();
		std::cout << test3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
	

	return 0;
}