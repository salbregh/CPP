/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 15:25:57 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 16:33:48 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : public IMateriaSource
{
    private:
        AMateria**      _materia;
        int            _count;
    public:
        MateriaSource(void);
        virtual ~MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        MateriaSource&	operator=(MateriaSource const &rhs);
        virtual void		learnMateria(AMateria* materia);
        virtual AMateria*	createMateria(std::string const &type);
};

#endif
