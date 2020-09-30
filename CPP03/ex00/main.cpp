/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:16:36 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/30 10:56:56 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	srand((unsigned) time(0));
	FragTrap Frag1("FRAG1");
	FragTrap Frag2("FRAG2");
	Frag1.beRepaired(10);
	Frag1.rangedAttack("FRAG2");
	Frag2.takeDamage(10);
	Frag2.beRepaired(25);
	Frag2.meleeAttack("TARGET");
	
	Frag1.vaulthunter_dot_exe("TARGET");
	Frag2.vaulthunter_dot_exe("TARGET");
	Frag2.vaulthunter_dot_exe("TARGET");
	Frag2.vaulthunter_dot_exe("TARGET");
	Frag2.vaulthunter_dot_exe("TARGET");
	Frag2.vaulthunter_dot_exe("TARGET");
}
