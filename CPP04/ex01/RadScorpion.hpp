/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:22:23 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 16:21:55 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H
# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		~RadScorpion(void);
		RadScorpion(RadScorpion const &src);
		RadScorpion&	operator=(RadScorpion const &rhs);
		void			takeDamage(int);
};

#endif
