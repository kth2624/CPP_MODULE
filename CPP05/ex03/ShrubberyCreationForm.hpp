/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:32:48 by tkim              #+#    #+#             */
/*   Updated: 2022/02/17 00:46:56 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

//try : 예외가 발생할 가능성이 있는 코드 블록. 예외가 발생하지 않는다면 try~catch문이 없는 것과 동일하게 동작하며, 예외가 발생하면 그 즉시 catch문으로 점프한다.
//catch : 내부에 정의된 예외처리를 실시하는 코드 블록.

class ShrubberyCreationForm:public Form
{
	private:
		std::string const target;

	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);
		ShrubberyCreationForm(const std::string target);
		void execute(Bureaucrat const & executor)const;
		std::string getTarget()const;

};
std::ostream& operator<<(std::ostream& o, const ShrubberyCreationForm& ShrubberyCreationForm);

#endif