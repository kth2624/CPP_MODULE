/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:33:10 by tkim              #+#    #+#             */
/*   Updated: 2022/02/21 22:49:22 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "easyfind.hpp"

int main(void)
{
  	std::vector<int> v;

	for (int i = 1; i < 10; i++)
		v.push_back(i);

	try
	{
		std::cout << easyfind(v, 1) << std::endl;
		std::cout << easyfind(v, 2) << std::endl;
		std::cout << easyfind(v, 3) << std::endl;
		std::cout << easyfind(v, 6) << std::endl;
		std::cout << easyfind(v, 9) << std::endl;
		std::cout << easyfind(v, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " (Not Found)" << std::endl;
	}
    return 0;
}