/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:21:37 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/07 14:12:11 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H
# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		virtual ~PowerFist(void);
		PowerFist(PowerFist const &src);
		PowerFist&	operator=(PowerFist const &rhs);
        void	attack(void) const;
};

#endif
