/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:18:55 by tkim              #+#    #+#             */
/*   Updated: 2022/02/10 20:13:21 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(), guard_mode(false)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap Default constructor called name = " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name), guard_mode(false)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap name constructor called name = " << this->getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called name = " << this->getName() << std::endl;

}

ScavTrap::ScavTrap(ScavTrap const& scav):ClapTrap(scav), guard_mode(false)
{
	std::cout << "ScavTrap Copy constructor called name = " << this->getName() << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& scav)
{
	if (this == &scav) //자기 자신을 대입하는 경우
		return *this;
	this->name = scav.getName();
	this->hit_points = scav.get_HP();
	this->energy_points = scav.get_EP();
	this->attack_damage = scav.get_ATT_DMG();
	std::cout << "ScavTrap" << "Assignation operator called name = "<< this->getName() << std::endl;
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->getName() << "이 " << target << "을 "<< this->get_ATT_DMG() << " 데미지로 공격했다." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	
	if(this->guard_mode == true)
	{
		std::cout << "ScavTrap " << this->getName() << "은 guard_mode라서 공격을 회피했습니다. " << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << "(HP[" << this->hit_points<< "])은 "  << amount << " damage를 입었다. " <<std::endl;
	if (this->hit_points <= amount)
	{
		this->hit_points = 0;
		std::cout << this->getName() << "은 죽었다." << std::endl;
	}else {
		this->hit_points -= amount;
		std::cout << this->getName() << "의 현재 hp는 "<< this->get_HP() << "이다." << std::endl;

	}
}
void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << this->getName() << "은 " << amount << " 만큼 수리를 했다. " <<std::endl;
	this->hit_points += amount;
	std::cout << this->getName() << "의 현재 hp는 "<< this->get_HP() << "이다." << std::endl;
}

void ScavTrap::guardGuate(void)
{
	this->guard_mode = true;
	std::cout << "ScavTrap " << this->getName() << "은 Guard_mode가 되었다. " << std::endl;

}
