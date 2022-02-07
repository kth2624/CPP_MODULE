/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:20:52 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:22:20 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon *weapon;

	public:
		HumanB();
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &weapon);
		~HumanB();

};
#endif