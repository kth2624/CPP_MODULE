/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:18:58 by tkim              #+#    #+#             */
/*   Updated: 2022/02/10 17:44:24 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
//상속 프로토타입
//class subclass_name : access_mode base_class_name
//{
//	// subclass body...
//};
class ScavTrap: public ClapTrap
{
	protected:
		bool guard_mode;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const& scav);
		ScavTrap& operator=(ScavTrap const& scav);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGuate(void);
};
#endif