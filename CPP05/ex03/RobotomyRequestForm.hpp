/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:04:57 by tkim              #+#    #+#             */
/*   Updated: 2022/02/17 00:20:15 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm:public Form
{ 
	private:
		std::string const target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		void execute(Bureaucrat const & executor)const;
		std::string getTarget()const;
};
std::ostream& operator<<(std::ostream& o, const RobotomyRequestForm& RobotomyRequestForm);

#endif