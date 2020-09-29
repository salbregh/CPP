/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 11:25:14 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/28 14:15:58 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << _weapon->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon& weaponB)
{
    _weapon = &weaponB;
    return ;
}
