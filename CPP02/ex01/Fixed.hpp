/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:51:48 by tkim              #+#    #+#             */
/*   Updated: 2022/02/07 23:51:49 by tkim             ###   ########.fr       */
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
		int getRawBits(void);
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& o, const Fixed& fixed);
#endif
//연산자 오버로딩
//(리턴 타입) operator(연산자) (연산자가 받는 인자)
//ostream& operator<<(ostream& o, Table& t) {
//  o << t.print_table();
//  return o;
//}