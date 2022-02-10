/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:15:53 by tkim              #+#    #+#             */
/*   Updated: 2022/02/10 17:46:16 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap v1("v1");
	ScavTrap v2("v2");
	ScavTrap v3("v3");

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
	
	std::cout << std::endl;
	return 0;
}