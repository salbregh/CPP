/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 16:53:57 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/28 13:40:22 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"


class Human
{
	private:
		Brain const _Human;

	public:
		Human(void);
		~Human(void);
		const Brain*	identify(void);
		const Brain&	getBrain(void) const;
};

#endif
