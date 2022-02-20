/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializtion.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:42:19 by tkim              #+#    #+#             */
/*   Updated: 2022/02/19 15:45:35 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZTION_HPP
#define SERIALIZTION_HPP
#include <iostream>
#include <cstdint>

struct Data
{
	int value;
};

Data*	deserialize(uintptr_t raw);
uintptr_t	serialize(Data* ptr);

#endif