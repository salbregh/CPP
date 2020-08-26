/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:08:20 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/25 12:36:47 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): _name(name)
{
	std::cout << "Constructor called, made: " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeAttackDamage = 30;
	this->_rangesAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_level = 1;

	// DELETE AFTER
	std::cout << std::endl << "VALUES" << std::endl;
	std::cout << "value _hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "value _maxHitPoints: " << this->_maxHitPoints << std::endl;
	std::cout << "value _energyPoints: " << this->_energyPoints << std::endl;
	std::cout << "value _maxEnergyPoints: " << this->_maxEnergyPoints << std::endl;
	std::cout << "value _meleeAttackDamage: " << this->_meleeAttackDamage << std::endl;
	std::cout << "value _rangesAttackDamage: " << this->_rangesAttackDamage << std::endl;
	std::cout << "value _armorDamageReduction: " << this->_armorDamageReduction << std::endl;
	std::cout << "value _level: " << this->_level << std::endl << std::endl;
}

// copy constructor
FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

// // assignation operator overload
// FragTrap&	FragTrap::operator=(FragTrap const &rhs)
// {
// 	std::cout << "Assignation operator called" << std::endl;
// 	std::cout << "To " << rhs.getValue() << std::endl;
//	this->_n = rhs.getValue();
// 	return (*this);
// }

void		FragTrap::rangedAttack(std::string const & target)
{
	if (takeDamage(_rangesAttackDamage - _armorDamageReduction) == 1)
	{
		std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing " << _rangesAttackDamage - _armorDamageReduction << " points of damage!" << std::endl;
		std::cout << "HP is: " << _hitPoints << std::endl;
		std::cout << std::endl;
	}
	else if  (takeDamage(_rangesAttackDamage - _armorDamageReduction) == 0)
	{
		std::cout << "HP is already: " << _hitPoints << std::endl;
	}
}

void		FragTrap::meleeAttack(std::string const & target)
{
	if (takeDamage(_meleeAttackDamage - _armorDamageReduction) == 1)
	{
		std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing " << _meleeAttackDamage - _armorDamageReduction << " points of damage!" << std::endl;
		std::cout << "HP is: " << _hitPoints << std::endl;
		std::cout << std::endl; 
	}
	else if  (takeDamage(_meleeAttackDamage - _armorDamageReduction) == 0)
	{
		std::cout << "HP is already: " << _hitPoints << std::endl;
	}
}

int			FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		return (0);
	else
	{
		if (_hitPoints > amount)
			_hitPoints = _hitPoints - amount;
		else
			_hitPoints = 0;
	}
	return (1);
}

void		FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == _maxHitPoints)
		std::cout << "Couldn't be repaired HP already at the maximum" << std::endl << std::endl;
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

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called, deleted: " << this->_name << std::endl;
	
	// DELETE AFTER
	std::cout << std::endl << "VALUES" << std::endl;
	std::cout << "value _hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "value _maxHitPoints: " << this->_maxHitPoints << std::endl;
	std::cout << "value _energyPoints: " << this->_energyPoints << std::endl;
	std::cout << "value _maxEnergyPoints: " << this->_maxEnergyPoints << std::endl;
	std::cout << "value _meleeAttackDamage: " << this->_meleeAttackDamage << std::endl;
	std::cout << "value _rangesAttackDamage: " << this->_rangesAttackDamage << std::endl;
	std::cout << "value _armorDamageReduction: " << this->_armorDamageReduction << std::endl;
	std::cout << "value _level: " << this->_level << std::endl << std::endl;
}
