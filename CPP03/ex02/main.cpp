/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:15:53 by tkim              #+#    #+#             */
/*   Updated: 2022/02/10 20:07:26 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap v1("v1");
	ScavTrap v2("v2");
	ScavTrap v3("v3");
	FragTrap f1("f1");
	FragTrap f2("f2");
	FragTrap f3("f3");

	std::cout << std::endl;

	v1.attack("v2");
	v2.takeDamage(v1.get_ATT_DMG());
	v2.attack("v3");
	v3.takeDamage(v2.get_ATT_DMG());
	v2.beRepaired(10);
	v3.beRepaired(10);
	v3.guardGuate();
	v2.attack("v3");
	v3.takeDamage(v2.get_ATT_DMG());
	
	std::cout<< "-----------------------------" << std::endl;
	f1.attack("f2");
	f2.takeDamage(f1.get_ATT_DMG());
	f2.attack("f3");
	f3.takeDamage(f2.get_ATT_DMG());
	f2.beRepaired(10);
	f3.beRepaired(10);
	f3.highFivesGuys();

	std::cout << std::endl;
	return 0;
}