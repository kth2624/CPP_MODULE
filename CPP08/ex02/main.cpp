/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:33:10 by tkim              #+#    #+#             */
/*   Updated: 2022/02/22 14:14:05 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "mutantstack.hpp"
#include <list>

void listEx()
{
	{
		std::list<int> list;

		list.push_back(5);
		list.push_back(17);

		std::cout << list.back() << std::endl;

		list.pop_back();

		std::cout << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		//[...]
		list.push_back(0);

		std::list<int>::iterator it_list = list.begin();
		std::list<int>::iterator ite_list = list.end();
		
		++it_list;
		--it_list;
		while (it_list != ite_list)
		{
		std::cout << *it_list << std::endl;
		++it_list;
		}
		std::list<int> s_list(list);
	}
}
int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17); //5 17(top)
	std::cout << mstack.top() << std::endl; // -> 17
	mstack.pop(); // 5
	std::cout << mstack.size() << std::endl; // -> 1
	mstack.push(3); // 5 3
	mstack.push(5); // 5 3 5
	mstack.push(737); // 5 3 5 737
	//[...]
	mstack.push(0); // 5 3 5 737 0
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	{
	std::cout << "------- reverse_iterator Ex -----" << std::endl;

	std::stack<int> s(mstack);
	MutantStack<int>::reverse_iterator it = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite = mstack.rend();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	}

	
	std::cout << "------- list Ex -----" << std::endl;
	listEx();

	return 0;
}