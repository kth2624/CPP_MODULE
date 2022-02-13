/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:54:08 by tkim              #+#    #+#             */
/*   Updated: 2022/02/13 21:39:40 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog Default constructor called " << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called " << std::endl;
}

Dog::Dog(const Dog& dog)
{
	*this = dog;
	std::cout << "Dog copy constructor called " << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	delete this->brain;
	this->brain = new Brain(*dog.brain);
	this->type = dog.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog dododog!! dogggg!! ! " << std::endl;
}

Brain& Dog::getBrain(void)
{
	return *(this->brain);
}

void Dog::setBrain(int i, std::string idea)
{
	this->brain->setIdeas(i, idea);
}

void Dog::showBrain() const
{
	this->brain->showAllIdeas();
}