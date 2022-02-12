/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:13:29 by tkim              #+#    #+#             */
/*   Updated: 2022/02/12 05:27:56 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "------------ Animal -------------" << std::endl;
	const Animal* ani = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << "ani type = " << ani->getType() << " " << std::endl;
	std::cout << "dog type = " << dog->getType() << " " << std::endl;
	std::cout << "cat type = " << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	ani->makeSound();

	std::cout << std::endl;
	delete cat;
	delete dog;
	delete ani;
	std::cout << std::endl;
	std::cout << "----------- WrongAnimal -------------" << std::endl;

	const WrongAnimal* ani2 = new WrongAnimal();
	const WrongAnimal* cat2 = new WrongCat();
	const WrongAnimal* cat3 = new WrongCat();
	std::cout << "ani2 type = " << ani2->getType() << " " << std::endl;
	std::cout << "cat2 type = " << cat2->getType() << " " << std::endl;
	std::cout << "cat3 type = " << cat3->getType() << " " << std::endl;
	cat2->makeSound(); //will output the cat sound!
	cat3->makeSound();
	ani2->makeSound();
	delete cat2;
	delete cat3;
	delete ani2;

	return 0;
}