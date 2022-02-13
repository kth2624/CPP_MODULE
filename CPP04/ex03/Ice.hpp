/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:58:28 by tkim              #+#    #+#             */
/*   Updated: 2022/02/14 00:05:00 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include <iostream>
#include "AMateria.hpp"

class Ice:public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const &Ice);
		Ice& operator=(Ice const &Ice);
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif