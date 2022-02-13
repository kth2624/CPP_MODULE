/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:43:55 by tkim              #+#    #+#             */
/*   Updated: 2022/02/14 00:51:22 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():name("")
{
	for(int i = 0; i < 4; i++)
	{
		this->slot[i] = 0;
	}
}

Character::Character(std::string name):name(name)
{
	for(int i = 0; i < 4; i++)
		{
			this->slot[i] = 0;
		}
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if(this->slot[i])
			delete this->slot[i];
	}
}

Character::Character(Character const &Character)
{
	*this = Character;
}

Character& Character::operator=(Character const &Character)
{
	this->name = Character.getName();
	for(int i = 0; i < 4; i++)
	{
		if(Character.slot[i])
			this->slot[i] = Character.slot[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if(!m)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if(!this->slot[i])
		{
			this->slot[i] = m->clone();
			break;
		}
	}
}

void Character::unequip(int idx)
{
	this->slot[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if(this->slot[idx])
		this->slot[idx]->use(target);
}