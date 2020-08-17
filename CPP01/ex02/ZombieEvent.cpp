/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 18:44:58 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/17 18:52:22 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie*	newZombie = new Zombie(name, this->_type);
	return (newZombie);
}

Zombie*    ZombieEvent::randomChump()
{
	std::string names[6] = {"Peer", "Amber", "Bob", "Tessa", "Jelle", "Qing"};
	int		nb;
	nb = rand() % 6;
	Zombie*		randomZombie = new Zombie(names[nb], this->_type);
	randomZombie->announce();
	return (randomZombie);
}
