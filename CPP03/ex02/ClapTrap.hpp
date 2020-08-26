/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 19:33:15 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/26 19:37:30 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class		ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int 	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int 	_level;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangesAttackDamage;
		unsigned int	_armorDamageReduction;
};

#endif
