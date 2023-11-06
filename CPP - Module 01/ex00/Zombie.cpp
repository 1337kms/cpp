#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	return new Zombie(name);
}

void randomChump(std::string name)
{
	Zombie rc_zombie(name);
	rc_zombie.announce();
}
