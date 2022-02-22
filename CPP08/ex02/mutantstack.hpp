/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 22:38:53 by tkim              #+#    #+#             */
/*   Updated: 2022/02/22 14:11:10 by tkim             ###   ########.fr       */
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
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend(); }

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator begin()const { return this->c.begin(); }
		const_iterator end()const { return this->c.end(); }

		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator rbegin()const { return this->c.rbegin(); }
		const_reverse_iterator rend()const { return this->c.rend(); }

};

#endif
