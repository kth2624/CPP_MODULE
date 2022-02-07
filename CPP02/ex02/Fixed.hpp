/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:51:59 by tkim              #+#    #+#             */
/*   Updated: 2022/02/07 23:52:00 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>
#include <ostream>

class Fixed
{
	private:
		int point_value;
		static const int fractional_bits;

	public:
		Fixed();
		Fixed(int raw);
		Fixed(float raw);
		~Fixed();
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed &fixed);
		bool operator>(const Fixed &fixed) const;
		bool operator<(const Fixed &fixed)const;
		bool operator>=(const Fixed &fixed)const;
		bool operator<=(const Fixed &fixed)const;
		bool operator==(const Fixed &fixed)const;
		bool operator!=(const Fixed &fixed)const;
		Fixed operator+(const Fixed &fixed)const;
		Fixed operator-(const Fixed &fixed)const;
		Fixed operator*(const Fixed &fixed)const;
		Fixed operator/(const Fixed &fixed)const;
		Fixed operator++();//전위
		Fixed operator++(int);//후위 int는 cpp에서 전위,후위 구분규칙임 
		Fixed operator--();//전위
		Fixed operator--(int);//후위 인자로 int타입이 전달되는것 아님 
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed& min( Fixed &op1,  Fixed &op2);
		static const Fixed& min(const Fixed &op1, const Fixed &op2);
		static Fixed& max( Fixed &op1,  Fixed &op2);
		static const Fixed& max(const Fixed &op1, const Fixed &op2);
		
};
std::ostream& operator<<(std::ostream& o, const Fixed& fixed);
#endif
//연산자 오버로딩
//(리턴 타입) operator(연산자) (연산자가 받는 인자)
//ostream& operator<<(ostream& o, Table& t) {
//  o << t.print_table();
//  return o;
//}