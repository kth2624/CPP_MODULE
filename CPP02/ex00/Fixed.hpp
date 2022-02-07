/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:51:38 by tkim              #+#    #+#             */
/*   Updated: 2022/02/07 23:51:39 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int point_value;
		static const int fractional_bits;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed &fixed);
		int getRawBits(void);
		void setRawBits(int const raw);
};
#endif