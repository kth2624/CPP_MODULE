#include "DiamondTrap.hpp"
//상속 순서도 중요함.. 
DiamondTrap::DiamondTrap():ClapTrap("Trap_clap_name"),FragTrap("Trap_clap_name"),ScavTrap("Trap_clap_name"),name("Trap")
{
	this->hit_points = 100;//frag HP = 100
	this->energy_points = 50; //scav EP = 50
	this->attack_damage = 30; //frag DMG = 30
	std::cout << "DiamondTrap Default constructor called name = " << name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name+"_clap_name"),FragTrap(name+"_clap_name"),ScavTrap(name+"_clap_name"),name(name)
{
	this->hit_points = 100;//frag HP = 100
	this->energy_points = 50; //scav EP = 50
	this->attack_damage = 30; //frag DMG = 30
	std::cout << "DiamondTrap name constructor called name = " << name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called name = " << this->getName() << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& diamond):FragTrap(diamond),ScavTrap(diamond)
{
	std::cout << "DiamondTrap Copy constructor called name = " << this->getName() << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& diamond)
{
	if (this == &diamond) //자기 자신을 대입하는 경우
		return *this;
	this->name = diamond.getName();
	this->hit_points = diamond.get_HP();
	this->energy_points = diamond.get_EP();
	this->attack_damage = diamond.get_ATT_DMG();
	std::cout << "DiamondTrap" << "Assignation operator called name = "<< this->getName() << std::endl;
	return *this;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if(this->guard_mode == true)
	{
		std::cout << "DiamondTrap " << this->getName() << "은 guard_mode라서 공격을 회피했습니다. " << std::endl;
		return ;
	}
	std::cout << "DiamondTrap " << this->getName() << "(HP[" << this->hit_points<< "])은 "  << amount << " damage를 입었다. " <<std::endl;
	if (this->hit_points <= amount)
	{
		this->hit_points = 0;
		std::cout << this->getName() << "은 죽었다." << std::endl;
	}else {
		this->hit_points -= amount;
		std::cout << this->getName() << "의 현재 hp는 "<< this->get_HP() << "이다." << std::endl;

	}
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->getName() << "은 " << amount << " 만큼 수리를 했다. " <<std::endl;
	this->hit_points += amount;
	
}

void DiamondTrap::whoAmI()
{
	std::cout << std::endl;
	std::cout << "whoAmI!! whoAmI!! whoAmI!! whoAmI!! whoAmI!! " << std::endl;
	std::cout << ClapTrap::getName() << " !!! " << std::endl;
}


void DiamondTrap::highFivesGuys(void)
{
	std::cout << "DiamondTrap " << this->getName() << "은 highFivesGuys(동맹하자) 라고 외쳤다." << std::endl;
}

void DiamondTrap::guardGuate(void)
{
	this->guard_mode = true;
	std::cout << "DiamondTrap " << this->getName() << "은 Guard_mode가 되었다. " << std::endl;

}
std::string DiamondTrap::getName(void)const
{
	return this->name;
}