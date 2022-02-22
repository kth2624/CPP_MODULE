/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:33:10 by tkim              #+#    #+#             */
/*   Updated: 2022/02/22 14:01:27 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main()
{
	{
		std::cout << "---------------Subject ex case--------------" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.printElement();
		std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan = " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "-----------span num :  1 case-------------" << std::endl;
		try
		{
			Span sp = Span(1);
			sp.addNumber(5);
			std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
			std::cout << "longestSpan = " << sp.longestSpan() << std::endl;
			sp.printElement();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl << std::endl;

	}
	
	{
		std::cout << "-----------span num :  0 case-------------" << std::endl;
		try
		{
			Span sp = Span();
			sp.printElement();
			std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
			std::cout << "longestSpan = " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}

	{
		std::cout << "-----------span num :  10000 case -------------" << std::endl;
		Span man = Span(10000);
		std::vector<int> arr;
		for(int i = 0; i < 10000; i++)
		{
			arr.push_back(i);
		}
		try
		{
			man.addNumbers(arr.begin(), arr.end());
			//man.printElement();
			std::cout << man.shortestSpan() << std::endl;
			std::cout << man.longestSpan() << std::endl;
			man.addNumber(10000);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}


	{
		std::cout << "-----------addNumber(range , range ) -------------" << std::endl;

		std::vector<int> v;
    	for (int i = 0; i < 10; i++)
        	v.push_back(i);

		Span span(15);
		try
		{
			span.addNumbers(v.begin(), v.end());
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
		try
		{
			std::cout << span.shortestSpan() << std::endl;
			std::cout << span.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}
	return 0;
}