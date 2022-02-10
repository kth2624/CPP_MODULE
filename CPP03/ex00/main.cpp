/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:15:53 by tkim              #+#    #+#             */
/*   Updated: 2022/02/10 16:15:30 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap v1("v1");
	ClapTrap v2("v2");
	ClapTrap v3("v3");

	std::cout << std::endl;

	v1.attack("v2");
	v2.takeDamage(v1.get_ATT_DMG());
	v2.attack("v3");
	v3.takeDamage(v2.get_ATT_DMG());
	v2.beRepaired(10);
	v3.beRepaired(10);
	
	std::cout << std::endl;
	return 0;
}