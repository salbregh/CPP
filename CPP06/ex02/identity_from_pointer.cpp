/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   identity_from_pointer.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 14:41:59 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/24 12:07:11 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "identity.hpp"

/*
** Base is the parent class
** A B and C are the derived classes
** method dynamic_cast<A*>(p) should succesfully
** cast the base class pointer to the derived class pointer
** (if the Base *p is from A)
** 
** Since casting a derived class pointer to a base class pointer
** into some other derived class pointer is invalid
** dynamic_cast<A*>(p) if the base class is not A, should return NULL
*/

void	identity_from_pointer(Base *p)
{
	A *a;
	a = dynamic_cast<A*>(p);
    if (a != NULL)
	{
        std::cout << "A" <<std::endl;
		return ;
	}
	B *b;
	b = dynamic_cast<B*>(p);
	if (b != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C *c;
	c = dynamic_cast<C*>(p);
	if (c != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}
