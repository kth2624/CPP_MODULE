/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 01:33:55 by tkim              #+#    #+#             */
/*   Updated: 2022/02/21 02:22:22 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

template<typename T>
int easyfind(T container, int find)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), find);
	if(iter == container.end())
		throw std::exception();
	return *iter;
}
#endif
