/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 18:32:30 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/17 18:55:01 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	Zombie	ZombiePeer("Peer", "QueenZombie");
	ZombiePeer.announce();
	std::cout << std::endl;

	ZombieEvent	Event;
	Event.setZombieType("type");
	Zombie	*Zombie3  = Event.newZombie("Zoommie");
	Zombie3->announce();
	delete Zombie3;
	std::cout << std::endl;
	
	srand((unsigned) time(0));
	Zombie* RandomName1 = Event.randomChump();
	Zombie* RandomName2 = Event.randomChump();
	delete RandomName1;
	delete RandomName2;
	// system("leaks a.out");
	return (0);
}