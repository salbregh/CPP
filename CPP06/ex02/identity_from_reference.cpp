/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   identity_from_reference.cpp                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 14:43:05 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/18 20:01:23 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "identity.hpp"

void	identity_from_reference(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" <<std::endl;
		(void)a;
	}
    catch (std::exception &e) {}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" <<std::endl;
		(void)b;
	}
    catch (std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" <<std::endl;
		(void)c;
	}
    catch (std::exception &e) {}
}
