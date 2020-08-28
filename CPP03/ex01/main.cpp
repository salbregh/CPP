/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:16:36 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/28 15:24:39 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	srand((unsigned) time(0));
	// for the random attack function
	
	FragTrap Frag1("FRAG");
	ScavTrap Scav1("SCAV");

	// // try to repare when at 100
	Frag1.beRepaired(10);
	Scav1.beRepaired(20);

	Scav1.rangedAttack("FRAG");
	// takes 20 - armourreduction 5 points of damage so HP should be 85
	Frag1.takeDamage(20);
	// add repare to more then 100
	Frag1.beRepaired(20);
	Frag1.meleeAttack("TARGET");
	Scav1.meleeAttack("TARGET");

	
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
