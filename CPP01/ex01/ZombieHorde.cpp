/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:20:41 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:22:15 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name ) 
{
	int i;

	i = 0;
	Zombie *newzom = new Zombie[N];
	
	while(i < N)
	{ 
		std::stringstream sstream;
		sstream << i + 1;
		newzom[i].setZname(name + sstream.str());
		i++;
	}
	
	return (newzom);
}