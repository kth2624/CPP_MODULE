/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:32:51 by tkim              #+#    #+#             */
/*   Updated: 2022/02/15 23:59:01 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form():name(""),isSigned(false),signGrade(150),excuteGrade(150)
{

}

Form::~Form()
{

}

Form::Form(Form const &Form):name(Form.getName()),isSigned(Form.getIsSigned()),signGrade(Form.getSignGrade()),excuteGrade(Form.getExcuteGrade())
{

}

Form& Form::operator=(Form const &)
{
	return *this;
}

Form::Form(std::string name):name(name),isSigned(false),signGrade(150),excuteGrade(150)
{

}

Form::Form(std::string name, int signGrade, int excuteGrade):name(name),isSigned(false),signGrade(signGrade),excuteGrade(excuteGrade)
{
	if(this->signGrade < 1 || this->excuteGrade < 1)
		throw Form::GradeTooHighException();
	else if(this->signGrade > 150 || this->excuteGrade > 150)
		throw Form::GradeTooLowException();
}

std::string Form::getName()const
{
	return this->name;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if(this->getSignGrade() >= bureaucrat.getGrade())
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}

bool Form::getIsSigned() const
{
	return this->isSigned;
}
int Form::getSignGrade() const
{
	return this->signGrade;
}
int Form::getExcuteGrade() const
{
	return this->excuteGrade;
}
std::ostream& operator<<(std::ostream& o, const Form& Form)
{
	o << "Form name = " << Form.getName() << " grade = " << Form.getSignGrade() << " excuteGrade = " << Form.getExcuteGrade() << " sign  = " << Form.getIsSigned();
	return o;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form GradeTooHigh !!! ";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form GradeTooLow !!! ";
}