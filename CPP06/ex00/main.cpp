/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:35:49 by tkim              #+#    #+#             */
/*   Updated: 2022/02/18 19:50:40 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		std::cout << "arg Error! \n";
		return 0;
	}
	std::string arg = static_cast<std::string>(argv[1]);
	std::cout << arg << std::endl;
	int int_value;
	float float_value;
	double double_value;
	char char_value;
	
	return 0;
}