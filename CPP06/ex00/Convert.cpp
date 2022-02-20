/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:45:33 by tkim              #+#    #+#             */
/*   Updated: 2022/02/19 15:23:19 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void strToChar(char *argv)
{
	std::cout << "char   :";

    char *pos=NULL;
    double value=0;
    value = strtod(argv,&pos);//실수 부분을 추출
	std::string pos2(pos);
	std::string str(argv);
	if(str.length() == 1 && !isdigit(str[0]))
	{
		std::cout << '\'' << str << '\'' << std::endl;
		return ;
	}
	if(isnan(value) || isinf(value) || (value < 0 || value > 127) || \
	(pos2 != "f" && pos2 != ""))
		std::cout << "impossible" << std::endl;
	else if(!isprint(value))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << static_cast<char>(value) << '\'' << std::endl;
}
void strToInt(char *argv)
{
	std::cout << "int    :";
	char *pos=NULL;
    double value=0;
    value = strtod(argv,&pos);//실수 부분을 추출
	std::string pos2(pos);
		std::string str(argv);
	if(str.length() == 1 && !isdigit(str[0]))
	{
		std::cout << static_cast<int>(str[0]) << std::endl;
		return ;
	}
	if(isnan(value) || isinf(value) || \
	(pos2 != "f" && pos2 != ""))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;

}
void strToFloat(char *argv)
{
	std::cout << "float  :";
	char *pos=NULL;
    double value=0;
    value = strtod(argv,&pos);//실수 부분을 추출
	std::string pos2(pos);
		std::string str(argv);
	if(str.length() == 1 && !isdigit(str[0]))
	{
		std::cout << static_cast<float>(str[0]) << 'f' << std::endl;
		return ;
	}
	if((pos2 != "f" && pos2 != ""))
		std::cout << "impossible" << std::endl;
	else
		std::cout <<static_cast<float>(value) << "f"<< std::endl;

}
void strToDouble(char *argv)
{
	std::cout << "double :";
	char *pos=NULL;
    double value=0;
    value = strtod(argv,&pos);//실수 부분을 추출
	std::string pos2(pos);
	std::string str(argv);
	if(str.length() == 1 && !isdigit(str[0]))
	{
		std::cout <<  static_cast<double>(str[0])  << std::endl;
		return ;
	}
	if((pos2 != "f" && pos2 != ""))
		std::cout << "impossible" << std::endl;
	else
		std::cout << value << std::endl;

}