/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/08 13:47:56 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/08 15:29:49 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"


class       Squad : public ISquad
{
    private:
        ISpaceMarine*			_array[100];
    public:
        Squad(void);
        virtual ~Squad(void);
        virtual int             getCount(void) const;
        virtual ISpaceMarine*   getUnit(int N) const;
        virtual int             push(ISpaceMarine* spacemarine);
};

#endif
