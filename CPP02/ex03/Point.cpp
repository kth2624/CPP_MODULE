/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:17:44 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:18:14 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(Fixed(0)),y(Fixed(0))
{

}

Point::~Point()
{

}

Point::Point(const Point& point):x(Fixed(point.getX())),y(Fixed(point.getY()))
{

}

Point::Point(const float x, const float y):x(Fixed(x)), y(Fixed(y))
{

}

Fixed Point::getX(void)const
{
	return this->x;
}

Fixed Point::getY(void)const
{
	return this->y;
}

Point& Point::operator=(const Point &)
{
	return *this;
}

Point Point::operator+(const Point &p)const
{
	Point temp((this->getX().toFloat() + p.getX().toFloat()),(this->getY().toFloat() + p.getY().toFloat()));
	return temp;
}

Point Point::operator-(const Point &p)const
{
	Point temp((this->getX().toFloat() - p.getX().toFloat()),(this->getY().toFloat() - p.getY().toFloat()));
	return temp;
}