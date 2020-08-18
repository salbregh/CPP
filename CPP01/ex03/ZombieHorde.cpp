/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 15:23:19 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/18 15:30:32 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->_N = N;
	Zombie*		ZombHorde = new Zombie[N];
	int			i = 0;
	std::string	name;

	while (i < N)
	{
		name = this->randomChump();
		ZombHorde[i].setZombie(name, "type");
		i++;
	}
	this->_zombies = ZombHorde;
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;
	return ;
}

std::string	ZombieHorde::randomChump()
{
	std::string names[7] = {"Peer", "Amber", "Bob", "Tessa", "Frank", "Jelle", "Queen"};
	int nb = rand() % 7;
	return (names[nb]);
}

void	ZombieHorde::announce(void)
{
	int		i = 0;
	while (i < this->_N)
	{
		this->_zombies[i].announce();
		i++;
	}
}
