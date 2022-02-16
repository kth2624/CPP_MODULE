/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:10:18 by tkim              #+#    #+#             */
/*   Updated: 2022/02/16 21:47:38 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardon_", 25, 5), target("")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon_" + target, 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj):Form(obj.getName(), 25, 5), target(obj.getTarget())
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &)
{
	return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw NotExecuteException();
	if (this->getExcuteGrade() < executor.getGrade())
		throw Form::GradeTooLowException();
	std::cout << getTarget() << " has been pardoned by Zafod Deeblebrox." << std::endl;
}

std::ostream& operator<<(std::ostream& o, const PresidentialPardonForm& obj)
{
	o << "name = " << obj.getName() << " grade = " << obj.getExcuteGrade() << " !";
	return o;
}
