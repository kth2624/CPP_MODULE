/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:19:25 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:19:53 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void ft_toupper(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		std::cout << (char)toupper(str[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++i < argc)
		{
			ft_toupper(argv[i]);
		}
		std::cout << std::endl;
	}
	return 0;
}