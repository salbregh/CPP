/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Aweapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:13:17 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/31 17:49:08 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H
# include <iostream>

class	AWeapon
{
	private:
		
	
    public:
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~ AWeapon(void);
		// std::string [...] getName(void) const;
		int				getAPcost(void) const;
		int				getDamage(void) const;
		virtual void	attack(void) const = 0;
};

#endif
