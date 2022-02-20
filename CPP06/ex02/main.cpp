/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:07:00 by tkim              #+#    #+#             */
/*   Updated: 2022/02/19 16:59:26 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *generate(void)
{
	int rNum = std::rand() % 3 + 1;
	Base *base = NULL;

	switch (rNum)
	{
		case 1:
			base = new A;
			std::cout << "A class generate." << std::endl;
			break;
		case 2:
			base = new B;
			std::cout << "B class generate." << std::endl;
			break;
		case 3:
			base = new C;
			std::cout << "C class generate." << std::endl;
			break;
	}
	return base;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A Pointer identify." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B Pointer identify." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C Pointer identify." << std::endl;
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A Reference identify." << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
	
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B Reference identify." << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C Reference identify." << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
	
}

int main(void)
{
	std::srand(std::time(NULL));
	{
		Base *pB = generate();
		Base &rB = *pB;

		identify(pB);
		identify(rB);
		std::cout << "--------------------------------" << std::endl;
	}
	{
		Base *pB = generate();
		Base &rB = *pB;

		identify(pB);
		identify(rB);
		std::cout << "--------------------------------" << std::endl;
	}
	{
		Base *pB = generate();
		Base &rB = *pB;

		identify(pB);
		identify(rB);
		std::cout << "--------------------------------" << std::endl;
	}

	


	return 0;
}