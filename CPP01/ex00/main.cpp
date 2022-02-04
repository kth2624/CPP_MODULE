#include "Zombie.hpp"

int main(void)
{
	std::string zName;
	Zombie *zom = newZombie("js_ts");
	Zombie zombies = Zombie("tkim");
	zom->announce();

	randomChump("jwoo");
	delete zom;
	return (0);
}