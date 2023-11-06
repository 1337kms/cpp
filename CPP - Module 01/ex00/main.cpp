#include "Zombie.hpp"

int main()
{
	std::string name;
	std::cout << "Création d'un zombie sur la stack : ";
	std::cout << "\n";
	std::getline(std::cin, name);
	Zombie stack_zombie(name);
	stack_zombie.announce();

	std::cout << "Création d'un zombie sur la heap : ";
	std::cout << "\n";
	std::getline(std::cin, name);
	Zombie *heap_zombie = newZombie(name);
	heap_zombie->announce();
	delete heap_zombie;

	std::cout << "Appel de la fonction randomChump : ";
	std::cout << "\n";
	std::getline(std::cin, name);
	randomChump(name);

	return 0;
}
