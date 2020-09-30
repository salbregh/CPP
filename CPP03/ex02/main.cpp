/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:16:36 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/30 13:12:31 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>

int		main()
{
	srand((unsigned) time(0));	
	FragTrap Frag1("FRAG");
	ScavTrap Scav1("SCAV");

	// // try to repare when at 100
	Frag1.beRepaired(10);
	Scav1.beRepaired(20);

	Frag1.rangedAttack("target");
	Scav1.rangedAttack("target");
	// takes 20 - armourreduction 5 points of damage so HP should be 85
	Frag1.takeDamage(20);
	// add repare to more then 100
	Frag1.beRepaired(20);
	
	Frag1.vaulthunter_dot_exe("TARGET");
	Frag1.vaulthunter_dot_exe("TARGET");
	Frag1.vaulthunter_dot_exe("TARGET");
	Frag1.vaulthunter_dot_exe("TARGET");
	Frag1.vaulthunter_dot_exe("TARGET");

	Scav1.challengeNewcomer();
	Scav1.challengeNewcomer();
	Scav1.challengeNewcomer();
	Scav1.challengeNewcomer();
}
