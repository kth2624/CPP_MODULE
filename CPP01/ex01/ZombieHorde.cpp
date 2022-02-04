#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name ) 
{
	int i;

	i = 0;
	Zombie *newzom = new Zombie[N];
	
	while(i < N)
	{ 
		std::stringstream sstream;
		sstream << i + 1;
		newzom[i].setZname(name + sstream.str());
		i++;
	}
	
	return (newzom);
}