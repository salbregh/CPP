/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 17:40:44 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 17:42:54 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H

class		ISquad
{
	public:
		virtual ~ISquad() {}
		virtual	int getCount() const = 0;
		virtual	ISpaceMarine* geUnit(int) const = 0;
		virtual	int push(ISpaceMarine* /* name */) = 0; 
};

#endif
