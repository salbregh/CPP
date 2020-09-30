/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:30:55 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/30 13:21:30 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("unknown")
{
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Constructor CLAPTRAP called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor CLAPTRAP called" << std::endl;
	*this = src;
	return ;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_armorDamageReduction = rhs._armorDamageReduction;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
		this->_level = rhs._level;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_meleeAttackDamage = rhs._meleeAttackDamage;
		this->_rangedAttackDamage = rhs._rangedAttackDamage;
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_classname << " " << this->_name << " attacks " << target 
	<< " at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}
		
void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_classname << " " << this->_name << " attacks " << target
	<< " with melee attack, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}
		
int			ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes damage" << std::endl;
	if (_hitPoints == 0)
	{
		std::cout << this->_name << "'s HP already at 0" << std::endl;
		return (0);
	}
	else
	{
		if (this->_hitPoints > (amount - this->_armorDamageReduction))
			this->_hitPoints = (this->_hitPoints - (amount - this->_armorDamageReduction));
		else
			this->_hitPoints = 0;
	}
	std::cout << this->_name << "'s HP is now: " << this->_hitPoints << std::endl;
	return (0);
}
		
void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == this->_maxHitPoints)
		std::cout << this->_name << " couldn't be repaired HP already at the maximum" << std::endl;
	else if (this->_hitPoints + amount >= this->_maxHitPoints)
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << this->_name << "'s HP repaired to: " << _hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints = this->_hitPoints + amount;
		std::cout << this->_name << "'s HP repaired to: " << this->_hitPoints << std::endl;
	}
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor CLAPTRAP called" << std::endl;
	return ;
}
