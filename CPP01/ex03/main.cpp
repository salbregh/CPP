/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 15:20:40 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/18 15:30:45 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)
{
	srand((unsigned) time(0));

	Zombie	ZombieInstance("ZombieName", "ZombieType");
	ZombieInstance.announce();
	std::cout << std::endl;
	ZombieHorde	HordeInstance(25);
	HordeInstance.announce();
}