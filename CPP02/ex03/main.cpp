/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:52:02 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:18:24 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a(0,0);
	Point b(0,5);
	Point c(5,2);
	Point point(0,0);//false;
	Point point2(1,2);
	std::cout << bsp( a,b,c,point) << std::endl;
	std::cout << bsp( a,b,c,point2) << std::endl;

	return 0;
}