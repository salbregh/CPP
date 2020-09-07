/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:16:20 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/07 13:52:37 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H
# include <iostream>

class	Enemy
{
	protected:
		int					_hp;
		std::string			_type;

	public:
		Enemy(void);
		Enemy(int hp, std::string const &type);
		virtual ~Enemy(void);
		Enemy(Enemy const &src);
		Enemy&			operator=(Enemy const &rhs);
		std::string		getType(void) const;
		int				getHP(void) const;	
		virtual void	takeDamage(int damage);
};

#endif
