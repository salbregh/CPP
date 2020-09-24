/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   generate.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 13:54:55 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/24 12:06:54 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "identity.hpp"

typedef		Base* (*makeRandom) ();

Base*	randomA(void)
{
	std::cout << "made a new A class" << std::endl;
	return (new A);
}

Base*	randomB(void)
{
	std::cout << "made a new B class" << std::endl;
	return (new B);
}
Base*	randomC(void)
{
	std::cout << "made a new C class" << std::endl;
	return (new C);
}

Base*	generate(void)
{
    int		random = rand();
	int		number = (random % 3);
	
	makeRandom funct[] =
	{
		randomA,
		randomB,
		randomC,
	};

    return (funct[number]());
}
