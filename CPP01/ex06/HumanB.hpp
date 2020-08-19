/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 11:25:17 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/19 13:01:14 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string		_name;
		Weapon*			_weapon;
	
	public:
		HumanB(std::string name);
		// HumanB(Weapon& weapon);
		void	attack(void);
		void	setWeapon(Weapon& weapon);
};

#endif
