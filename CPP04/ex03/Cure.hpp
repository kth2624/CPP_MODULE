/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:03:30 by tkim              #+#    #+#             */
/*   Updated: 2022/02/14 00:08:24 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
#include <iostream>
#include "AMateria.hpp"

class Cure:public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const &Cure);
		Cure& operator=(Cure const &Cure);
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif