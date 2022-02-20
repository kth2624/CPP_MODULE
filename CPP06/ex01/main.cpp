/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:50:57 by tkim              #+#    #+#             */
/*   Updated: 2022/02/19 15:52:13 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializtion.hpp"

int main(void)
{
	struct Data D;
	D.value = 42;

	uintptr_t	raw;
	struct Data	*ptr;

	std::cout << "Data struct value : " << D.value << std::endl;
	std::cout << "Data struct ptr   : " << &D << std::endl;
	raw = serialize(&D);
	std::cout << "serialize         : " << raw << std::endl;
	ptr = deserialize(raw);
	std::cout << "deserialize value : " << ptr->value << std::endl;
	std::cout << "deserialize ptr   : " << ptr << std::endl;

	return 0;
}