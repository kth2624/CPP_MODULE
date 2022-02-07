/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:51:46 by tkim              #+#    #+#             */
/*   Updated: 2022/02/07 23:51:47 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	this->point_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value):point_value(value)
{
	this->point_value = value << Fixed::fractional_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value):point_value(roundf(value * ( 1 << Fixed::fractional_bits)))
{

	std::cout << "Float constructor called" << std::endl;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	//this->point_value = fixed.point_value;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &other) //자기 자신을 대입하는 경우
		return *this;
	this->point_value = other.point_value;
	return *this;
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}

int Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->point_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->point_value = raw << Fixed::fractional_bits;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->point_value / (1 << Fixed::fractional_bits));
}

int Fixed::toInt( void ) const
{
	return (this->point_value >> Fixed::fractional_bits);
}
