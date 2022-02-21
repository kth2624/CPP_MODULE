/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 01:56:41 by tkim              #+#    #+#             */
/*   Updated: 2022/02/21 22:53:12 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span():N(0)
{

}

Span::Span(const Span& obj)
{
	*this = obj;
}

Span::~Span()
{

}

Span& Span::operator=(const Span& obj)
{
	if(this == &obj)
		return *this;
	N = obj.getN();
	v = obj.getV();
	return *this;
}

Span::Span(unsigned int N):N(N)
{

}

void Span::addNumber(int N)
{
	if(v.size() >= this->N)
		throw Span::OutOfBoundException();
	v.push_back(N);
}
void Span::addNumbers(int *arr, int n)
{
	if(v.size() > this->N)
		throw Span::OutOfBoundException();
	std::vector<int>::iterator iter;
	iter = v.begin();
	v.insert(iter, arr, arr + n);
}

unsigned int Span::shortestSpan()
{
	if(v.size() <= 1)
		throw Span::EmptyOrOneException();
	std::vector<int> tmp(v);
	std::sort(tmp.begin(), tmp.end());
	unsigned int min = longestSpan();
	for(unsigned int i = 1; i < tmp.size(); i++)
	{
		if (static_cast<unsigned int>(tmp[i] - tmp[i - 1]) < min)
		min = tmp[i] - tmp[i - 1];
	}
	return min;
}

unsigned int Span::longestSpan()
{
	if(v.size() <= 1)
		throw Span::EmptyOrOneException();
	std::vector<int> tmp(v);
	std::sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - (*tmp.begin());
}

unsigned int Span::getN()const
{
	return N;
}

std::vector<int> Span::getV()const
{
	return v;
}


void Span::printElement()
{
	std::vector<int>::iterator iter;
	for(iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << "span element = " << *iter << std::endl;
	}
}

const char*	Span::OutOfBoundException::what() const throw()
{
	return "Out of Bound !! ";
}

const char*	Span::EmptyOrOneException::what() const throw()
{
	return "Span Empty or one !! ";
}

