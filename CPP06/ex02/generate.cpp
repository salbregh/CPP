/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   generate.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 13:54:55 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/18 14:40:45 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "identity.hpp"

// write 3 functions that instanciate A B or C
// and returns the instance as a base pointer

// typedef "return tpye" (*myfunction) (given arguments)
// myfunction f compiles the same as : "return var" (*f)(); 
typedef		Base* (*makeRandom) ();

Base*	randomA(void)
{
	// A*	baseA;
	// baseA = new A;
	// return (baseA);
	std::cout << "made a new A class" << std::endl;
	return (new A);
}
Base*	randomB(void)
{
	// B*	baseB;
	// baseB = new B;
	// return (baseB);
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
	// in combination with srand in the main
	// this will generate a random number 1, 2 or 3
	
	makeRandom funct[] =
	{
		randomA,
		randomB,
		randomC,
	};

    return (funct[number]());
}

