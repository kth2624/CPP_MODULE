/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:03:24 by tkim              #+#    #+#             */
/*   Updated: 2022/02/14 00:06:20 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria()
{
	this->type = "cure";
}

Cure::~Cure()
{

}

Cure::Cure(Cure const &Cure)
{
	*this = Cure;
}

Cure& Cure::operator=(Cure const &Cure)
{
	this->type = Cure.getType();
	return *this;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}
AMateria* Cure::clone() const
{
	return new Cure();
}
