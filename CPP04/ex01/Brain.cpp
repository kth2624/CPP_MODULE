/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:30:35 by tkim              #+#    #+#             */
/*   Updated: 2022/02/13 17:11:17 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called " << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called " << std::endl;
}

Brain::Brain(const Brain& Brain)
{
	*this = Brain;
	std::cout << "Brain copy constructor called " << std::endl;
}

Brain& Brain::operator=(const Brain &Brain)
{
	std::cout << "Assignation operator called " << std::endl;
	for(int i = 0; i < 100; i++)
	{
		ideas[i] = Brain.ideas[i];
	}
	return *this;
}

void Brain::setIdeas(int i, std::string idea)
{
	this->ideas[i] = idea;
}

void Brain::showAllIdeas(void)const
{
	for(int i = 0; i < 100; i++)
	{
		if(this->ideas[i].length())
			std::cout << "show [" << i << "] =  " << this->ideas[i] << std::endl;
	}
}