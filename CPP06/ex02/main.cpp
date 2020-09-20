/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 22:47:27 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/18 20:12:24 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "identity.hpp"

int		main()
{
	// for generate function that randomly
	// instanciates A, B or C and returns the
	// instance as a Base pointer
	srand((unsigned) time(0));
	// generate takes a base class pointer
	Base *random;
	random = generate(); // second one to show its random
	Base& ref = *random;
	
	identity_from_pointer(random);
	identity_from_reference(ref);
	
	return (0);
}