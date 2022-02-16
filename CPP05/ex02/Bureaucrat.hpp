/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:13 by tkim              #+#    #+#             */
/*   Updated: 2022/02/16 21:22:19 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCREAT_HPP
# define BUREAUCREAT_HPP
#include <iostream>
#include <string>
class Bureaucrat;
#include "Form.hpp"
//try : 예외가 발생할 가능성이 있는 코드 블록. 예외가 발생하지 않는다면 try~catch문이 없는 것과 동일하게 동작하며, 예외가 발생하면 그 즉시 catch문으로 점프한다.
//catch : 내부에 정의된 예외처리를 실시하는 코드 블록.

class Bureaucrat
{
	private:
		std::string name;
		int grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &Bureaucrat);
		Bureaucrat& operator=(Bureaucrat const &Bureaucrat);
		
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		void increment();
		void decrement();
		void signForm(Form &Form);
		void executeForm(Form const & form);
		int getGrade()const;
		std::string getName()const;

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
};
std::ostream& operator<<(std::ostream& o, const Bureaucrat& Bureaucrat);

#endif