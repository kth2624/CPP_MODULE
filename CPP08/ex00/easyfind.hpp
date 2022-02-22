/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 01:33:55 by tkim              #+#    #+#             */
/*   Updated: 2022/02/22 13:47:23 by tkim             ###   ########.fr       */
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
typename T::iterator easyfind(T container, int find) //end() - 1
{
	typename T::iterator iter = std::find(container.begin(), container.end(), find);
	if(iter == container.end())
		throw std::exception();
	return iter;
}
#endif
