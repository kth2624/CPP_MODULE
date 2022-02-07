/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:20:34 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:22:12 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int n = 3;
	Zombie *zzom = zombieHorde(n, "zom");
	int i = 0;
	while(n--)
	{
		zzom[i].announce();
		i++;
	}

	delete[] zzom;
	return (0);
}