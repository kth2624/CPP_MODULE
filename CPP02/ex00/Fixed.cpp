/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:51:34 by tkim              #+#    #+#             */
/*   Updated: 2022/02/09 19:23:13 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	this->point_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	// this->point_value = fixed.point_value;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &other) //자기 자신을 대입하는 경우
		return *this;
	this->point_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->point_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->point_value = raw << Fixed::fractional_bits;
}
