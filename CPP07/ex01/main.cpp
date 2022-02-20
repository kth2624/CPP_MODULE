/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:33:10 by tkim              #+#    #+#             */
/*   Updated: 2022/02/20 21:40:06 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }


int main() {
    int num[] = { 0, 1, 2, 3, 4 }; 
    std::string str[] = { "A", "B", "C", "Hello CPP" };

    iter( num, 5, print );
    iter( str, 5, print );


    return 0;
}