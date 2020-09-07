/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:21:00 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/07 14:08:50 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H
# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	private:
		std::string		_name;
		int				_apcost;
		int				_damage;
	
	public:
		PlasmaRifle(void);
		virtual ~PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &src);
		PlasmaRifle&	operator=(PlasmaRifle const &rhs);
		void	attack(void) const;
};

#endif
