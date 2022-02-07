/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:20:49 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:22:18 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon &weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		void attack();
		~HumanA();
};
#endif