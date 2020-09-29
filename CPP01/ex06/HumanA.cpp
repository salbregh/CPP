/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 11:25:10 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/28 14:20:19 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponA): _weapon(weaponA), _name(name)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << _weapon.getType() << std::endl;
}