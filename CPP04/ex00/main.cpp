/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 07:55:50 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/31 13:59:05 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main()
{
	Sorcerer robert("Robert", "the Magnificent");
	
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	
	robert.polymorph(jim);
	// Jimmy has been turned into a cute little sheep!
	robert.polymorph(joe);
	// Joe has been turned into a pink pony!
	return (0);
}