/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:30:55 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/28 11:36:02 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
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
		_name = rhs._name;
		_armorDamageReduction = rhs._armorDamageReduction;
		_energyPoints = rhs._energyPoints;
		_hitPoints = rhs._hitPoints;
		_level = rhs._level;
		_maxEnergyPoints = rhs._maxEnergyPoints;
		_maxHitPoints = rhs._maxHitPoints;
		_meleeAttackDamage = rhs._meleeAttackDamage;
		_rangesAttackDamage = rhs._rangesAttackDamage;
	}
	return (*this);
}

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_classname << " " << this->_name << " attacks " << target 
	<< " at range, causing " << _rangesAttackDamage << " points of damage!" << std::endl;
}
		
void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_classname << " " << this->_name << " attacks " << target
	<< " with melee attack, causing " << _meleeAttackDamage << " points of damage!" << std::endl;
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
		if (_hitPoints > (amount - _armorDamageReduction))
			_hitPoints = (_hitPoints - (amount - _armorDamageReduction));
		else
			_hitPoints = 0;
	}
	std::cout << this->_name << "'s HP is now: " << this->_hitPoints << std::endl;
	return (0);
}
		
void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == _maxHitPoints)
		std::cout << "Couldn't be repaired HP already at the maximum" << std::endl;
	else if (_hitPoints + amount >= _maxHitPoints)
	{
		_hitPoints = _maxHitPoints;
		std::cout << "HP repaired to: " << _hitPoints << std::endl;
	}
	else
	{
		_hitPoints = _hitPoints + amount;
		std::cout << "HP repaired to: " << _hitPoints << std::endl;
	}
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor CLAPTRAP called" << std::endl;
	return ;
}
