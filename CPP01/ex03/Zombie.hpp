/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 18:58:03 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/17 18:58:10 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class	Zombie
{
	public:
		Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setZombie(std::string name, std::string type);

	private:
		std::string		_name;
		std::string		_type;
};

#endif
