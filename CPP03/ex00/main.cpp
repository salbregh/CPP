/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:16:36 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/26 18:18:32 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	srand((unsigned) time(0));
	// for the random attack function
	
	FragTrap Test1("ONE");
	FragTrap Test2("TWO");

	// FragTrap Test2(Test); // copy constructor

	// try to repare when at 100
	Test1.beRepaired(10);
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

	srand((unsigned) time(0));
}
