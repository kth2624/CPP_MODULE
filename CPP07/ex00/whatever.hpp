/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:40:35 by tkim              #+#    #+#             */
/*   Updated: 2022/02/20 21:04:01 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
/*
int sum(int a, int b){
   return a + b;
}
double sum(double a, double b){
   return a + b;
}  기존의 오버라이딩 방법.  비효율적임
*/

/*
template <typename T>
T sum(T a, T b){
    return a + b;
}	템플릿 방식
*/

template <typename T>
void swap(T &n1, T &n2)
{
	T tmp = n1;
	n1 = n2;
	n2 = tmp;
}

template <typename T>
T min(T const n1, T const n2)
{
	if (n1 > n2)
		return n2;
	return n1;
}

template <typename T>
T max(T const n1, T const n2)
{
	if (n1 < n2)
		return n2;
	return n1;
}

#endif