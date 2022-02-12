/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:54:08 by tkim              #+#    #+#             */
/*   Updated: 2022/02/12 05:31:12 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal()
{
	this->type = "Dog";
	std::cout << "Dog Default constructor called " << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called " << std::endl;
}

Dog::Dog(const Dog& dog)
{
	*this = dog;
	std::cout << "Dog copy constructor called " << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	this->type = dog.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog dododog!! dogggg!! ! " << std::endl;
}
