/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 17:49:00 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/28 14:16:24 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class	Weapon
{
	private:
		std::string		_type;

	public:
		Weapon(void);
		~Weapon(void);
		Weapon(std::string weapon);
		const std::string& getType(void) const;
		void setType(std::string type);
};

#endif
