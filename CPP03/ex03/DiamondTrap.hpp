#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public FragTrap, public ScavTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap const& diamond);
		DiamondTrap& operator=(DiamondTrap const& diamond);
		//using : 접근 지정자 바꾸기
		using ScavTrap::attack;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void whoAmI();
		void highFivesGuys(void);
		void guardGuate(void);
		std::string getName(void)const;
};
#endif