/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:21:46 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:22:27 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
#include <iostream>
#include <string>

class Karen
{
	private://멤버함수들 참조하려면 클래스 인스턴스의 this를 활용하여 참조해야함
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Karen();
		~Karen();
		void complain(std::string level);
};

#endif