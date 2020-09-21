/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 11:28:54 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 16:19:25 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int		main()
{
	// AMateria* sr = new Ice();
	// AMateria* a = new Ice();
	// AMateria* b = new Ice();
	// AMateria* c = new Ice();
	// AMateria* d = new Cure();

	// ICharacter* bo = new Character("bo");
	// sr->getXP();
	// sr->use(*bo);
	// sr->getXP();
	// sr->getType();
	// bo->equip(sr);
	// bo->equip(a);
	// bo->equip(b);
	// bo->equip(c);
	// bo->equip(d);
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
    // delete me;
    // delete src;
    // return 0;
	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter*		me = new Character("me");

	AMateria*		tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter*		bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
	return 0;
}
