/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:28:30 by tkim              #+#    #+#             */
/*   Updated: 2022/02/12 05:31:04 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal()
{
	this->type = "Cat";
	std::cout << "Cat Default constructor called " << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called " << std::endl;
}

Cat::Cat(const Cat& Cat)
{
	*this = Cat;
	std::cout << "Cat copy constructor called " << std::endl;
}

Cat& Cat::operator=(const Cat &Cat)
{
	this->type = Cat.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat nnaaaoong !! ! " << std::endl;
}
