/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:40:35 by tkim              #+#    #+#             */
/*   Updated: 2022/02/20 21:33:16 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *arr , int arrSize, void(*f)(T const &fn))
{
	for(int i = 0; i< arrSize ; i++)
	{
		f(arr[i]);
	}
}

#endif