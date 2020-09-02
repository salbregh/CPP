/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:21:37 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 13:59:02 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H
# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	private:
		std::string		_name;
		int				_apcost;
		int				_damage;
	
	public:
		PowerFist(void);
		~PowerFist(void);
		PowerFist(PowerFist const &src);
		PowerFist&	operator=(PowerFist const &rhs);
        void	attack(void) const;
};

#endif
