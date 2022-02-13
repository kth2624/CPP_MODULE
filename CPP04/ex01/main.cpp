/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:29:15 by tkim              #+#    #+#             */
/*   Updated: 2022/02/13 22:37:10 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

{
	//main 예제
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
	delete i;
	system("leaks brain > b");
}
{
	Animal *animals[6];
	for(int i = 0; i < 6; i++)
	{
		if(i % 2 == 0)
		{
			animals[i] = new Dog();
			animals[i]->makeSound();
			std::cout << std::endl;
		}
		else
		{
			animals[i] = new Cat();
			animals[i]->makeSound();
			std::cout << std::endl;

		}
	}
	
	for(int i = 0; i < 6; i++)
	{
		delete animals[i];
	}

	std::cout << std::endl << "-------------  deep copy -----------" << std::endl;
	Animal *cat1 = new Cat();
	((Cat *)cat1)->setBrain(0,"Hello");
	((Cat *)cat1)->setBrain(1,"Cat1");
	((Cat *)cat1)->showBrain();
	
	Animal *cat2 = new Cat(*((Cat *)cat1));
	((Cat *)cat2)->setBrain(0,"Cat2");
	((Cat *)cat2)->setBrain(1,"Hello!!?");
	((Cat *)cat1)->showBrain();
	((Cat *)cat2)->showBrain();

	delete cat1;
	delete cat2;
	system("leaks brain > a");
}
	return 0;
}