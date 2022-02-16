/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:32:48 by tkim              #+#    #+#             */
/*   Updated: 2022/02/17 02:27:52 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include <string>
class Form;
#include "Bureaucrat.hpp"
//try : 예외가 발생할 가능성이 있는 코드 블록. 예외가 발생하지 않는다면 try~catch문이 없는 것과 동일하게 동작하며, 예외가 발생하면 그 즉시 catch문으로 점프한다.
//catch : 내부에 정의된 예외처리를 실시하는 코드 블록.

class Form
{
	private:
		std::string const name;
		bool isSigned;
		const int signGrade;
		const int excuteGrade;

	public:
		Form();
		virtual ~Form();
		Form(Form const &Form);
		Form& operator=(Form const &);
		Form(std::string const name, const int gradeSign, const int gradeExecute);
		Form(const std::string name);
		void beSigned(const Bureaucrat& bureaucrat);
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExcuteGrade() const;
		std::string getName()const;
		virtual void execute(Bureaucrat const & executor) const = 0;

		//cpp기본제공하는 추상클래스인 std::exception를 상속받아 사용한다
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NotExecuteException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream& o, const Form& Form);

#endif