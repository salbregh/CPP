/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 11:25:14 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/19 13:12:24 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << _weapon->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
    return ;
}
