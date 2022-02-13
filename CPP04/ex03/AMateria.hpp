/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:43:39 by tkim              #+#    #+#             */
/*   Updated: 2022/02/13 23:48:46 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <iostream>
class AMateria;//서로 임포트하는 경우
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const &amateria);
		AMateria(std::string const & type);
		AMateria& operator=(AMateria const &amateria);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif