/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:27:59 by tkim              #+#    #+#             */
/*   Updated: 2022/02/12 04:56:47 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat:public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& dog);
		Cat& operator=(const Cat &dog);
		void makeSound() const;
};

#endif