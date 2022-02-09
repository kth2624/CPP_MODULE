/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:22:01 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 20:10:33 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		std::cout << "arg error ^^ retry! " << std::endl;
		return 0;
	}
	std::string value(argv[1]);
	if(value != "debug" && value != "info" && value != "warning" && value != "error")
	{
		std::cout << "Probably complaining about insignificant problems" << std::endl;
		return 0;
	}
	Karen karen;

	karen.complain(value);
	return 0;
}