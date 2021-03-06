/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:35:49 by tkim              #+#    #+#             */
/*   Updated: 2022/02/19 15:14:03 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		std::cout << "arg Error! \n";
		return 0;
	}
	std::cout << std::fixed;
	std::cout.precision(1);
	
	strToChar(argv[1]);
	strToInt(argv[1]);
	strToFloat(argv[1]);
	strToDouble(argv[1]);
	return 0;
}