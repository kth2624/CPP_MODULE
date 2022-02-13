/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:13:22 by tkim              #+#    #+#             */
/*   Updated: 2022/02/12 05:30:49 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal")
{
	std::cout << "Animal Default constructor called " << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called " << std::endl;
}

Animal::Animal(const Animal& ani)
{
	*this = ani;
	std::cout << "Animal copy constructor called " << std::endl;
}

Animal& Animal::operator=(const Animal &ani)
{
	this->type = ani.getType();
	return *this;
}

std::string Animal::getType()const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Animal ani ani! zzZ zzZ ! " << std::endl;
}
