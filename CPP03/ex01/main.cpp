/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:16:36 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/30 12:10:52 by salbregh      ########   odam.nl         */
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
	Frag1.beRepaired(10);
	Scav1.beRepaired(20);

	Scav1.rangedAttack("FRAG");
	Frag1.takeDamage(15);
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
