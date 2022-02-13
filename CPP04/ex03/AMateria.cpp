/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:43:32 by tkim              #+#    #+#             */
/*   Updated: 2022/02/14 00:56:28 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():type("")
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(std::string const & type):type(type)
{

}

AMateria::AMateria(AMateria const &amateria)
{
	*this = amateria;
}

AMateria& AMateria::operator=(AMateria const &amateria)
{
	this->type = amateria.getType();
	return *this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}

std::string const &AMateria::getType()const
{
	return this->type;
}