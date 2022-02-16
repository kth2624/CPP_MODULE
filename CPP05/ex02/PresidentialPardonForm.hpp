/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:39:57 by tkim              #+#    #+#             */
/*   Updated: 2022/02/16 21:36:27 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm:public Form
{ 
	private:
		std::string const target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		~PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);
		void execute(Bureaucrat const & executor)const;
		std::string getTarget()const;
};
std::ostream& operator<<(std::ostream& o, const PresidentialPardonForm& PresidentialPardonForm);

#endif