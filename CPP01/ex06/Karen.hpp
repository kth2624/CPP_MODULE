#ifndef KAREN_HPP
# define KAREN_HPP
#include <iostream>
#include <string>

class Karen
{
	private://멤버함수들 참조하려면 클래스 인스턴스의 this를 활용하여 참조해야함
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Karen();
		~Karen();
		int get_value_num(std::string value);
		void complain(std::string level, std::string value);
};

#endif