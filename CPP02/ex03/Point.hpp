/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:17:41 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:18:17 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	
	public:
		Point();
		~Point();
		Point(const Point& point);
		Point(const float x, const float y);
		Point& operator=(const Point &point);
		Fixed getX(void)const;
		Fixed getY(void)const;
		Point operator+(const Point &p)const;
		Point operator-(const Point &p)const;
};
#endif