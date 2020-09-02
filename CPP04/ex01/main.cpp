/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:17:09 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 17:33:20 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int		main()
{
	Character*	me = new Character("Me");
		
	std::cout << *me;
	// me has 40 AP and is unarmed

	Enemy*		b = new RadScorpion();
	// * click click click *

	AWeapon*	pr = new PlasmaRifle();
	AWeapon*	pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	// me has 40 AP and wields a plasma rifle
	me->equip(pf);

	me->attack(b);
	// me attacks radscorpon with a powerfist
	/// *pschhh... SBAM!*
	std::cout << *me;
	// me has 32 AP and wields a Powerfist
	me->equip(pr);
	std::cout << *me;
	// me has 32 AP and wields a Plasma Rifle
	me->attack(b);
	// me attacks RadScorpion with a Plasma Rifle
	// piouu piouu piouu
	std::cout << *me;
	// me has 27 AP and wields a Plasme Rifle
	me->attack(b);
	// me attacks RadScorpion with a Plasma Rifle
	// piouu piouu piouu
	std::cout << *me;
	// me has 22 AP and wields a Plasma Rifle


	return (0);
}
