/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 16:21:04 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/18 17:31:55 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class	Brain
{
	public:
		Brain(void);
		~Brain(void);
		const Brain* identify(void) const;
};

#endif
