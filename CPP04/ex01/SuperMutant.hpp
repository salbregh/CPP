/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:22:56 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 16:19:29 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H
# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		~SuperMutant(void);
		SuperMutant(SuperMutant const &src);
		SuperMutant&	operator=(SuperMutant const &rhs);
		void			takeDamage(int);
};

#endif
