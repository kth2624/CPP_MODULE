/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:48:33 by kth2624           #+#    #+#             */
/*   Updated: 2022/02/07 23:50:20 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	this->point_value = 0;
}

Fixed::Fixed(int value):point_value(value)
{
	this->point_value = value << Fixed::fractional_bits;
}

Fixed::Fixed(float value):point_value(roundf(value * ( 1 << Fixed::fractional_bits)))
{

}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& fixed)
{
	//this->point_value = fixed.point_value;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed &other)
{
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

int Fixed::getRawBits(void) const
{
	return this->point_value;
}

void Fixed::setRawBits(int const raw)
{
	this->point_value = raw << Fixed::fractional_bits;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->point_value / (1 << Fixed::fractional_bits));
}

int Fixed::toInt( void ) const
{
	return (this->getRawBits() >> Fixed::fractional_bits);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed)const
{
	return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed)const
{
	return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed)const
{
	return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed)const
{
	return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed)const
{
	return this->getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed)const
{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed)const
{
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed)const
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)const
{
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++()
{
	this->point_value++;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	operator++();
	return temp;
}
Fixed Fixed::operator--()
{
	this->point_value--;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	operator--();
	return temp;
}

Fixed& Fixed::min( Fixed &op1,  Fixed &op2)
{
	if(op1 > op2)
		return op2;
	return op1;
}

const Fixed& Fixed::min(const Fixed &op1, const Fixed &op2)
{
	if(op1 > op2)
		return op2;
	return op1;
}

Fixed& Fixed::max( Fixed &op1,  Fixed &op2)
{
	if(op1 < op2)
		return op2;
	return op1;
}

const Fixed& Fixed::max(const Fixed &op1, const Fixed &op2)
{
	if(op1 < op2)
		return op2;
	return op1;
}