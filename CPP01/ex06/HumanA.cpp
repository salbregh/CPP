/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 11:25:10 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/19 12:52:54 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon)
{
    this->_name = name;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << _weapon.getType() << std::endl;
}