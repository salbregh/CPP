/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:22:44 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/07 14:20:13 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    // this->_hp = 170;
    // this->_type = "Super Mutant";
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

void            SuperMutant::takeDamage(int damage)
{
    if (damage < 0)
        return ;
    else
    {
        if (damage >= 3)
            damage = damage - 3;
        this->_hp = this->_hp - damage;
        if (this->_hp < 0)
            this->_hp = 0;
    }
}
