/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:32:51 by tkim              #+#    #+#             */
/*   Updated: 2022/02/17 02:15:52 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", 145, 137), target("")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm" + target, 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj):Form(obj.getName(), 145, 137), target(obj.getTarget())
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
{
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw NotExecuteException();
	if (this->getExcuteGrade() < executor.getGrade())
		throw Form::GradeTooLowException();
	std::string asciiTree = 
		"    oxoxoo    ooxoo\n"
		"  ooxojo oo  otoxooo\n"
		" oooo xwoxoo koo ooox\n"
		" oxo o xoxxi oxoxxoxo\n"
		"  oxo xoxomooo o ooo\n"
		"    ooo\\xx\\  /o/o\n"
		"        \\  \\/ /\n"
		"         |   /\n"
		"         |  |\n"
		"         | D|\n"
		"         |  |\n"
		"         |  |\n"
		"  ______/____\\____\n";
	std::string filename = this->target + "_shrubbery";
	std::ofstream fout(filename); 

	if(!fout.is_open())
	{
		std::cout << "file open Error!! " << std::endl;
		return ;
	}
	fout << asciiTree;
	fout.close();
}

