/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Aweapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:13:17 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/01 14:17:58 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H
# include <iostream>

class	AWeapon
{
	private:
		std::string		_name;
		int				_apcost;
		int				_damage;
		
    public:
		AWeapon(std::string const &name);
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~ AWeapon(void);
		AWeapon(AWeapon const &src);
		AWeapon&		operator=(AWeapon const &rhs);
		std::string		getName(void) const;
		int				getAPcost(void) const;
		int				getDamage(void) const;
		virtual void	attack(void) const = 0;
		// attack gives certain sounds and lighhting effect
		// when it attacks() this will be deferred to the inheriting classes
};

#endif
