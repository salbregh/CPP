/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 17:40:44 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/08 12:13:35 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H
 # include "ISpaceMarine.hpp"

class		ISquad
{
	public:
		virtual ~ISquad() {}
		virtual	int getCount() const = 0;
		// returns the number of units currently in the squad
		virtual	ISpaceMarine* getUnit(int N) const = 0;
		// returns a pointer to the Nth unis (we start at 0),
		// NULL pointer in case of out-of-bounds index
		virtual	int push(ISpaceMarine* spacemarine) = 0;
		// push(XXX) adds the XXX unit to the end of the squad,
		// returns the number of units in the swuad after the operation
		// Adding a null unit, or a unit already in the squad makes no sense.
};

#endif
