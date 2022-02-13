/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:58:34 by tkim              #+#    #+#             */
/*   Updated: 2022/02/14 00:04:24 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria()
{
	this->type = "ice";
}

Ice::~Ice()
{

}

Ice::Ice(Ice const &Ice)
{
	*this = Ice;
}

Ice& Ice::operator=(Ice const &Ice)
{
	this->type = Ice.getType();
	return *this;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
AMateria* Ice::clone() const
{
	return new Ice();
}
