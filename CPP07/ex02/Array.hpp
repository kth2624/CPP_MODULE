/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:45:37 by tkim              #+#    #+#             */
/*   Updated: 2022/02/20 21:46:46 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

/*
template<typename T>
class Test {
	private:
		T value_;
	public:
		Test(T value) : value_(value) {};
}

int main(void) {
  Test<int> t_int(42); // 템플릿 인수 명시
  Test<std::stding> t_string("hello"); // 템플릿 인수 명시
}*/

class Array
{ 
	private:
	public:
		Array();
		Array(const Array& obj);
		~Array();
		Array& operator=(const Array& obj);
};

#endif

Array::Array()
{ }
Array::Array(const Array& obj)
{ }
Array::~Array()
{ }
Array& Array::operator=(const Array& obj)
{ }