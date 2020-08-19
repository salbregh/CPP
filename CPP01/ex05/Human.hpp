/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 16:53:57 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/18 17:27:41 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"


class Human
{
	private:
		Brain _Human;

	public:
		const Brain*	identify(void);
		const Brain&	getBrain(void) const;
};

#endif
