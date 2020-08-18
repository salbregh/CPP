/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 15:23:22 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/18 15:30:13 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include "Zombie.hpp"

class	ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);

		std::string	randomChump();
		void		announce(void);
	
	private:
		int			_N;
		Zombie*		_zombies;
};

#endif
