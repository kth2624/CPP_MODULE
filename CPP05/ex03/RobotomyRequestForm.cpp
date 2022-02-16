/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:04:54 by tkim              #+#    #+#             */
/*   Updated: 2022/02/17 00:39:04 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 72, 45), target("")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm " + target, 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj):Form(obj.getName(), 72, 45), target(obj.getTarget())
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand((unsigned int)time(NULL));
	int num = rand();
	if (this->getIsSigned() == false)
		throw Form::NotExecuteException();
	else if (executor.getGrade() > this->getExcuteGrade())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		if ((num % 2 + 1) == 1)
			std::cout << this->target << " has been robotomized successfully." << std::endl;
		else
			std::cout << this->target << " fail to be robotomized." << std::endl;
	}
}
