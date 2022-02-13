/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:44:54 by tkim              #+#    #+#             */
/*   Updated: 2022/02/14 00:47:22 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource
{
	private:
		AMateria *slot[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &MateriaSource);
		MateriaSource& operator=(MateriaSource const &MateriaSource);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
#endif