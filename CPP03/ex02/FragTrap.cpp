/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:29:31 by tkim              #+#    #+#             */
/*   Updated: 2022/02/10 20:29:33 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap():ClapTrap()
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap Default constructor called name = " << this->getName() << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap name constructor called name = " << this->getName() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called name = " << this->getName() << std::endl;

}

FragTrap::FragTrap(FragTrap const& scav):ClapTrap(scav)
{
	std::cout << "FragTrap Copy constructor called name = " << this->getName() << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& scav)
{
	if (this == &scav) //자기 자신을 대입하는 경우
		return *this;
	this->name = scav.getName();
	this->hit_points = scav.get_HP();
	this->energy_points = scav.get_EP();
	this->attack_damage = scav.get_ATT_DMG();
	std::cout << "FragTrap" << "Assignation operator called name = "<< this->getName() << std::endl;
	return *this;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->getName() << "이 " << target << "을 "<< this->get_ATT_DMG() << " 데미지로 공격했다." << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->getName() << "(HP[" << this->hit_points<< "])은 "  << amount << " damage를 입었다. " <<std::endl;
	if (this->hit_points <= amount)
	{
		this->hit_points = 0;
		std::cout << this->getName() << "은 죽었다." << std::endl;
	}else {
		this->hit_points -= amount;
		std::cout << this->getName() << "의 현재 hp는 "<< this->get_HP() << "이다." << std::endl;

	}
}
void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << this->getName() << "은 " << amount << " 만큼 수리를 했다. " <<std::endl;
	this->hit_points += amount;
	std::cout << this->getName() << "의 현재 hp는 "<< this->get_HP() << "이다." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << "은 highFivesGuys(동맹하자) 라고 외쳤다." << std::endl;
}