/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:15:55 by tkim              #+#    #+#             */
/*   Updated: 2022/02/10 20:11:26 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("Trap"),hit_points(10),energy_points(10),attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called name = " << this->getName() << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name),hit_points(10),energy_points(10),attack_damage(0)
{
	std::cout << "ClapTrap name constructor called name = " << this->getName() << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called name = " << this->getName() << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "ClapTrap Copy constructor called name = " << this->getName() << std::endl;
	*this = clap;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &clap)
{
	if (this == &clap) //자기 자신을 대입하는 경우
		return *this;
	this->name = clap.getName();
	this->hit_points = clap.get_HP();
	this->energy_points = clap.get_EP();
	this->attack_damage = clap.get_ATT_DMG();
	std::cout << "Assignation operator called name = "<< this->getName() << std::endl;
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->getName() << "이 " << target << "을 "<< this->get_ATT_DMG() << " 데미지로 공격했다." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << "(HP[" << this->hit_points<< "])은 " << amount << " damage를 입었다. " <<std::endl;
	if (this->hit_points <= amount)
	{
		this->hit_points = 0;
		std::cout << this->getName() << "은 죽었다." << std::endl;
	}else {
		this->hit_points -= amount;
		std::cout << this->getName() << "의 현재 hp는 "<< this->get_HP() << "이다." << std::endl;

	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << "은 " << amount << " 만큼 수리를 했다. " <<std::endl;
	this->hit_points += amount;
	std::cout << this->getName() << "의 현재 hp는 "<< this->get_HP() << "이다." << std::endl;
}

std::string ClapTrap::getName(void)const
{
	return this->name;
}

unsigned int ClapTrap::get_HP(void)const
{
	return this->hit_points;
}

unsigned int ClapTrap::get_EP(void)const
{
	return this->energy_points;
}

unsigned int ClapTrap::get_ATT_DMG(void)const
{
	return this->attack_damage;
}