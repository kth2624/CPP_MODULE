/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:44:57 by tkim              #+#    #+#             */
/*   Updated: 2022/02/14 00:54:15 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		this->slot[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if(this->slot[i])
			delete this->slot[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &MateriaSource)
{
	*this = MateriaSource;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &MateriaSource)
{
	for(int i = 0; i < 4; i++)
	{
		if(MateriaSource.slot[i])
			this->slot[i] = MateriaSource.slot[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->slot[i] && this->slot[i]->getType() == type)
			return this->slot[i];
	
	}
	return 0;
}