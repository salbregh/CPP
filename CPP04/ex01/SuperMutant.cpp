/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:22:44 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 22:59:00 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
{
    this->_hp = 170;
    this->_type = "Super Mutant";
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return ;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh..." << std::endl;
    return ;
}

SuperMutant::SuperMutant(SuperMutant const &src)
{
    *this = src;
    return ;
}

SuperMutant&    SuperMutant::operator=(SuperMutant const &rhs)
{
    if (this != &rhs)
	{
		_type = rhs._type;
		_hp = rhs._hp;
	}
	return (*this) ;
}

void            SuperMutant::takeDamage(int)
{
    // overload damage to take 3 less damage points than normal
}
