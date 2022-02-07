/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:21:00 by tkim              #+#    #+#             */
/*   Updated: 2022/02/08 01:22:24 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdio>
int check_arg(int argc, char *argv[])
{
	if(argc != 4)
	{
		return (1);
	}
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if(s1 == "" || s2 == "")
	{
		return (1);
	}
	return 0;
}

int main(int argc, char *argv[])
{
	size_t pos;

	if(check_arg(argc, argv) == 1)
	{
		std::cout << "arg Error!! " << std::endl;
		return (0);
	}
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string filename(argv[1]);
	std::ifstream fin(filename); 
	
	if (!fin.is_open())
	{
		std::cout << "file open Error!! " << std::endl;
		return (0);
	}
	std::string oneline;
	std::ofstream fout(filename + ".replace"); 

	if(!fout.is_open())
	{
		std::cout << "file open Error!! " << std::endl;
		return (0);
	}
	
	while(!fin.eof())
	{
		std::string temp = "";
		std::getline(fin, oneline);
		if((pos = oneline.find(s1,0)) == std::string::npos)
			fout << oneline;
		else{//find가 있는경우
			while(1)
			{
				temp += oneline.substr(0,pos);//he
				temp += s2;//hez
				oneline = oneline.substr(pos+s1.length(),oneline.length());
				if((pos = oneline.find(s1,0)) == std::string::npos)
				{
					temp += oneline;
					break;
				}
			}
			fout << temp;
		}
		if (!fin.eof())
			fout << std::endl;
	}
	
	fin.close();
	fout.close();
	return 0;	
}