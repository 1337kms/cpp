#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name) : name(name) {}
		
		void announce(void)
		{
			std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
		}

		Zombie* newZombie(std::string name);
	
	private:
		std::string name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
