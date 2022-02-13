/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:14:12 by tkim              #+#    #+#             */
/*   Updated: 2022/02/14 00:44:14 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cpp에서의 인터페이스는 가상 소멸자와 순수 가상 함수만 선언되어 있는 클래스이다.
#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif