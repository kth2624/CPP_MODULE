/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:20:22 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:22:07 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string zName;
	Zombie *zom = newZombie("js_ts");
	Zombie zombies = Zombie("tkim");
	zom->announce();

	randomChump("jwoo");
	delete zom;
	return (0);
}