/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:58:24 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/28 12:16:06 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "Constructor FRAGTRAP called, made: " << this->_name << std::endl;
	this->_classname = "FragTrap";
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeAttackDamage = 30;
	this->_rangesAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_level = 1;
	std::cout << "START VALUES OF " << this->_name << std::endl;
	std::cout << "value _hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "value _energyPoints: " << this->_energyPoints << std::endl << std::endl;
}

// copy constructor
FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy constructor FragTrap called" << std::endl;
	*this = src;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap const &rhs)
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5] = {"attack1", "attack2", "attack3", "attack4", "attack5"};
	int			nb = rand() % 5;
	if (_energyPoints < 25)
	{
		std::cout << "Not enough energy points for attack" << std::endl;
		std::cout << "EP is: " << _energyPoints << std::endl;
		std::cout << std::endl;
	}
	else
	{
		_energyPoints -= 25;
		std::cout << "Random attack by " << this->_name << " : " << attacks[nb] << " done on " << target << std::endl;
		std::cout << "EP is: " << _energyPoints << std::endl;
		std::cout << std::endl;
	}
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called, deleted: " << this->_name << std::endl;
	std::cout << "END VALUES OF " << this->_name << std::endl;
	std::cout << "value _hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "value _energyPoints: " << this->_energyPoints << std::endl <<std::endl;
}
