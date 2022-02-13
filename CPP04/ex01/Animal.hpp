/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:13:19 by tkim              #+#    #+#             */
/*   Updated: 2022/02/12 04:53:44 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

//참고
//cpp에서 다형성
//가상함수 : 부모 클래스와 자식 클래스에 동일한 이름의 함수의 다른 작동
//함수 템플릿 : 동일한 이름의 함수가 다양한 자료형을 처리
//함수 오버로드 : 동일한 이름의 함수가 다른 작동
//연산자 오버로드 : 한가지 연산자가 다양한 작동
//즉 다형성이란 함수 이름이 같아도 다른 작업을 하는 것을 말함

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		//소멸자를 가상 함수로 선언하지 않으면 이 경우 자식 클래스의 소멸자는 결코 호출되지 않는다. 
		virtual ~Animal();
		Animal(const Animal& ani);
		Animal& operator=(const Animal &ani);
		std::string getType()const;
		virtual void makeSound() const;
};
#endif