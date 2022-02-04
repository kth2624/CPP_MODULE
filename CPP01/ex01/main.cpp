#include "Zombie.hpp"

int main(void)
{
	int n = 3;
	Zombie *zzom = zombieHorde(n, "zom");
	int i = 0;
	while(n--)
	{
		zzom[i].announce();
		i++;
	}

	delete[] zzom;
	return (0);
}