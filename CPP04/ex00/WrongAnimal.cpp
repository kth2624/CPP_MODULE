/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:13:22 by tkim              #+#    #+#             */
/*   Updated: 2022/02/12 05:31:25 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ani)
{
	*this = ani;
	std::cout << "Animal copy constructor called " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ani)
{
	this->type = ani.getType();
	return *this;
}

std::string WrongAnimal::getType()const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Animal ani ani! zzZ zzZ ! " << std::endl;
}
