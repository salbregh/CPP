/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:14:00 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 22:54:31 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	private:
		std::string		_name;
		int				_ap;

	public:
		Character(std::string const & name);
		Character(void);
		~Character(void);
		Character(const char &src);
		Character&	operator=(Character const &rhs);
		void		recoverAP(void);
		void		equip(AWeapon* weapon);
		void		attack(Enemy* enemy);
		std::string	getName(void) const;
		int			getAP(void) const;	
};

std::ostream& operator<<(std::ostream &out, const Character &rhs);

#endif
