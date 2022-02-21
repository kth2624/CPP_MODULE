/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 22:38:53 by tkim              #+#    #+#             */
/*   Updated: 2022/02/21 22:40:20 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>
#include <vector>

template<typename T>
class MutantStack: public std::stack<T>
{ 
	private:
	public:
		MutantStack()
		{

		}
		
		MutantStack(const MutantStack& obj)
		{
			*this = obj;
		}

		~MutantStack()
		{

		}

		MutantStack& operator=(const MutantStack& obj)
		{
			if(this == &obj)
				return *this;
			this->c = obj->c;
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}

};

#endif
