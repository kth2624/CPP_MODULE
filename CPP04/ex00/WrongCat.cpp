/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:28:30 by tkim              #+#    #+#             */
/*   Updated: 2022/02/12 05:31:33 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor called " << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat& cat)
{
	*this = cat;
	std::cout << "WrongCat copy constructor called " << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &cat)
{
	this->type = cat.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat nnaaaoong !! ! " << std::endl;
}
