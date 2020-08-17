/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 18:42:51 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/17 18:52:32 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include "Zombie.hpp"

class	ZombieEvent
{
	public:
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		Zombie*	randomChump(void);

	private:
		std::string		_type;
};

#endif
