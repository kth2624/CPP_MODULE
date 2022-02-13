/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:30:27 by tkim              #+#    #+#             */
/*   Updated: 2022/02/13 17:09:57 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <string>

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