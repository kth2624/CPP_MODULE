/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 01:56:41 by tkim              #+#    #+#             */
/*   Updated: 2022/02/21 21:52:49 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Span
{ 
	private:
		unsigned int N;
		std::vector<int> v;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& obj);
		~Span();
		Span& operator=(const Span& obj);
		void addNumber(int N);
		void addNumbers(int *arr, int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		unsigned int getN()const;
		std::vector<int> getV()const;
		void printElement();
		class	OutOfBoundException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class	EmptyOrOneException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
#endif