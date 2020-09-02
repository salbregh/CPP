/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:22:07 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 16:51:50 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy()
{
    this->_hp = 80;
    this->_type = "RadScorpion";
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src)
{
    *this = src;
    return ;
}

RadScorpion&    RadScorpion::operator=(RadScorpion const &rhs)
{
    if (this != &rhs)
	{
		_type = rhs._type;
		_hp = rhs._hp;
	}
	return (*this) ;
}

void            RadScorpion::takeDamage(int)
{
    // same function
}
