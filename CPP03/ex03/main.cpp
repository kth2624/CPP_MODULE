/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:15:53 by tkim              #+#    #+#             */
/*   Updated: 2022/02/11 01:26:14 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap c1("c1");
	ScavTrap v1("v1");
	ScavTrap v2("v2");
	FragTrap f1("f1");
	FragTrap f2("f2");
	DiamondTrap d1("d1");
	DiamondTrap d2("d2");

	std::cout << std::endl;

	v1.attack("c1");
	c1.takeDamage(v1.get_ATT_DMG());
	std::cout<< "--------------------------------------------" << std::endl;
	v1.attack("v2");
	v2.takeDamage(v1.get_ATT_DMG());
	v2.beRepaired(10);
	v1.guardGuate();
	v2.attack("v1");
	v1.takeDamage(v2.get_ATT_DMG());
	
	std::cout<< "--------------------------------------------" << std::endl;
	std::cout<< "--------------------------------------------" << std::endl;
	
	f1.attack("f2");
	f2.takeDamage(f1.get_ATT_DMG());
	f2.beRepaired(10);
	f2.highFivesGuys();

	std::cout<< "--------------------------------------------" << std::endl;
	std::cout<< "--------------------------------------------" << std::endl;
	d1.attack("d2");
	d2.takeDamage(d1.get_ATT_DMG());
	d1.guardGuate();
	d2.attack("d1");
	d1.takeDamage(d2.get_ATT_DMG());
	d1.highFivesGuys();

	d1.whoAmI();
	std::cout << std::endl;
	return 0;
}