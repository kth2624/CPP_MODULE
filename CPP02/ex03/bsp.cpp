/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:17:57 by tkim              #+#    #+#             */
/*   Updated: 2022/02/09 01:38:28 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* 공식
삼각형이 v1, v2, v3 세점으로 이루어져 있을때
d1 = v2 - v1
d2 = v3 - v1

테스트 하고자 하는 점을 k 라고 할때
p = k - v1

그려면 2차원 상의 한 점 p는 d1과 d2의 선형 합으로 나타낼 수 있습니다.
t1 * d1 + t2 * d2 = p
위의 식을 연립 방정식으로 풀면 t1과 t2를 얻을 수 있습니다.

점 k가 삼각형 내에 있으려면

0 <= t1 <= 1
0 <= t2 <= 1
t1 + t2 <= 1

이 세가지 조건을 만족하면 됩니다.
*/

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point d1(b-a);
	Point d2(c-a);
	Point p(point-a);
	Fixed zero(0);
	Fixed one(1);

	Fixed	t1((p.getX() * d2.getY() -  d2.getX() * p.getY()) / (d1.getX() * d2.getY() - d2.getX() * d1.getY()));
	
	Fixed	t2((p.getX() * d1.getY() -  d1.getX() * p.getY()) / (d2.getX() * d1.getY() - d1.getX() * d2.getY()));

	if ((zero < t1 + t2 && t1 + t2 < one) && (zero < t2 && t2 < one) && (zero < t1 && t1 < one))
		return true;
	return false;

}
