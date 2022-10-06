#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(void);
		Zombie* newZombie(std::string name);
		void annouce (void);

		void setName(std::string name);
		std::string getName(void);
};

#endif