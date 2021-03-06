/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 11:25:06 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/28 14:20:39 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon; 
	public:
		HumanA(std::string name, Weapon& weaponA);
		~HumanA(void);
		void	attack(void);
};

#endif
