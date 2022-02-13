/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:28:30 by tkim              #+#    #+#             */
/*   Updated: 2022/02/13 22:32:08 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat Default constructor called " << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor called " << std::endl;
}

Cat::Cat(const Cat& Cat)
{
	*this = Cat;
	std::cout << "Cat copy constructor called " << std::endl;
}

Cat& Cat::operator=(const Cat &Cat)
{

	this->brain = new Brain(*Cat.brain);
	this->type = Cat.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat nnaaaoong !! ! " << std::endl;
}

Brain& Cat::getBrain(void)
{
	return *(this->brain);
}

void Cat::setBrain(int i, std::string idea)
{
	this->brain->setIdeas(i, idea);
}

void Cat::showBrain() const
{
	this->brain->showAllIdeas();
}