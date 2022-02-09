/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:21:58 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 20:09:34 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{

}
Karen::~Karen()
{

}

int Karen::get_value_num(std::string level)
{
	std::string str[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	for(int i = 0; i < 4; i++)
	{

		if(str[i] == level)
		{
			return i;
		}
	}
	return -1;
}
void Karen::complain(std::string value)
{
	int n;
	std::string str[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	//멤버함수 포인터 문법
	//Return_Type (Class_Name::* pointer_name)(Argument_List)
	//void (Karen::*f)();
	void(Karen::*fn[4])() ={
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	n = get_value_num(value);

	// for(int i = 0; i < 4; i++)
	// {
	// 	if(str[i] == level && i >= n)
	// 		(this->*fn[i])();
	// }
	// std::cout << std::endl;

	switch(n)
	{
		case 0:
			(this->*fn[0])();
		case 1:
			(this->*fn[1])();
		case 2:
			(this->*fn[2])();
		case 3:
			(this->*fn[3])();
	}
}

void Karen::debug( void )
{
	std::cout << "debug : I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it! " << std::endl<< std::endl;
}
void Karen::info( void )
{
	std::cout << "info : I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it! " << std::endl<< std::endl;
}
void Karen::warning( void )
{
	std::cout << "warning : I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month. " << std::endl<< std::endl;
}
void Karen::error( void )
{
	std::cout << "error : This is unacceptable, I want to speak to the manager now. " << std::endl<< std::endl;
}