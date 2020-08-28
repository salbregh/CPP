/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:16:36 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/28 10:40:33 by salbregh      ########   odam.nl         */
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
	// FragTrap Test2("TWO");

	// // try to repare when at 100
	// Test1.beRepaired(10);
	// Scav1.beRepaired(20);

	Frag1.rangedAttack("TWO");
	Scav1.rangedAttack("TWO");
	// Test2.takeDamage(20);
	// // add repare to more then 100
	// Test1.beRepaired(20);
	Frag1.meleeAttack("TARGET");
	Scav1.meleeAttack("TARGET");

	
	Frag1.vaulthunter_dot_exe("TARGET");
	Frag1.vaulthunter_dot_exe("TARGET");
	Frag1.vaulthunter_dot_exe("TARGET");
	Frag1.vaulthunter_dot_exe("TARGET");
	Frag1.vaulthunter_dot_exe("TARGET");

	// Scav1.challengeNewcomer();
	// Scav1.challengeNewcomer();
	// Scav1.challengeNewcomer();
	// Scav1.challengeNewcomer();


	srand((unsigned) time(0));
}
