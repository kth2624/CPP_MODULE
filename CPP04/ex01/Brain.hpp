/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:30:27 by tkim              #+#    #+#             */
/*   Updated: 2022/02/14 01:07:17 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <string>
//핵심
//up casting 상속관계에서 하위클래스가 상위클래스로 형변환하는것
//down casting 상속관계에서 업캐스팅했던 상위 클래스 인스턴스가 하위클래스로 형변환 하는것
class Brain
{
	private:
		std::string ideas[100];
		
	public:
		Brain();
		~Brain();
		Brain(const Brain& brain);
		Brain& operator=(const Brain &brain);
		void setIdeas(int i, std::string idea);
		void showAllIdeas(void)const;
};

#endif