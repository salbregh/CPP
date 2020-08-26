/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:16:36 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/26 19:21:33 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	srand((unsigned) time(0));
	// for the random attack function
	
	FragTrap Test1("ONE");
	ScavTrap Scav1("SCAV");
	FragTrap Test2("TWO");

	// try to repare when at 100
	Test1.beRepaired(10);
	Scav1.beRepaired(20);

	Test1.rangedAttack("TWO");
	Test2.takeDamage(20);
	// add repare to more then 100
	Test1.beRepaired(20);
	Test1.meleeAttack("TARGET");
	Test1.vaulthunter_dot_exe("TARGET");

	
	Test2.vaulthunter_dot_exe("TARGET");
	Test2.vaulthunter_dot_exe("TARGET");
	Test2.vaulthunter_dot_exe("TARGET");
	Test2.vaulthunter_dot_exe("TARGET");
	Test2.vaulthunter_dot_exe("TARGET");

	Scav1.challengeNewcomer();
	Scav1.challengeNewcomer();
	Scav1.challengeNewcomer();
	Scav1.challengeNewcomer();
	

	srand((unsigned) time(0));
}
