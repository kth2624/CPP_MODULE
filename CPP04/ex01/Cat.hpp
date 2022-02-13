/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:27:59 by tkim              #+#    #+#             */
/*   Updated: 2022/02/13 17:21:46 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		~Cat();
		Cat(const Cat& dog);
		Cat& operator=(const Cat &dog);
		void makeSound() const;
		Brain& getBrain(void);
		void setBrain(int i, std::string idea);
		void showBrain() const;
};

#endif