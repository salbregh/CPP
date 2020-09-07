/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:13:17 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/07 14:54:23 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H
# include <iostream>

// the weapon class itself doenst have an attack
// its just a way of characterising some behaviors
// all the sub classes must have the attack funct defined


class	AWeapon
{
	protected:
		std::string		_name;
		int				_apcost;
		int				_damage;
		
    public:
		AWeapon(void);
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon(void);
		AWeapon(AWeapon const &src);
		AWeapon&		operator=(AWeapon const &rhs);
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		virtual void	attack(void) const = 0;
		// attack gives certain sounds and lighhting effect
		// when it attacks() this will be deferred to the inheriting classes
};

#endif
