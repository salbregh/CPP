/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 15:28:13 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/08 15:26:52 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int		main()
{
	ISpaceMarine*	bob = new TacticalMarine;
	// Tacital Marine is ready for battle!
	ISpaceMarine*	jim = new AssaultTerminator;
	// * teleports from space *

	ISquad*			vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		// 1 : for the holy PLOT
		// 2 : this code is unclean. PURIFY IT
		cur->rangedAttack();
		// 1 : attackts with a bolter
		// 2 : attackts with a chainsword
		cur->meleeAttack();
		// 1 : does nothing
		// 2 : attacks with chainfist
	}
	delete vlc;
	// 1 : aaargh
	// 2 : ill be back
	return 0;
}
