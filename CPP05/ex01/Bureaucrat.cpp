/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:41:16 by tkim              #+#    #+#             */
/*   Updated: 2022/02/15 23:39:27 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name(""),grade(150)
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &Bureaucrat)
{
	*this = Bureaucrat;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &Bureaucrat)
{
	this->name = Bureaucrat.getName();
	this->grade = Bureaucrat.getGrade();
	return *this;
}

Bureaucrat::Bureaucrat(std::string name):name(name),grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name),grade(grade)
{
	if(this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::increment()
{
	this->grade--;
	if(this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement()
{
	this->grade++;
	if(this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}


int Bureaucrat::getGrade()const
{
	return this->grade;
}

std::string Bureaucrat::getName()const
{
	return this->name;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& Bureaucrat)
{
	o << "name = " << Bureaucrat.getName() << " grade = " << Bureaucrat.getGrade() << " !";
	return o;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHigh !!! ";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLow !!! ";
}

void Bureaucrat::signForm(Form &Form)
{
	try
	{
		Form.beSigned(*this);
		std::cout << this->getName() << " sign " << Form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " cannot signs " << Form << " because" << std::endl;
		std::cerr << e.what() << '\n';
	}
	
}
