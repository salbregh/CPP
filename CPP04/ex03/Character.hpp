/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 14:52:32 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/10 16:33:55 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include "AMateria.hpp"

class		Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria** 		_materia;
		int 			_count;
	public:
		Character(void);
		Character(const std::string& name);
		~Character(void);
		Character(Character const &src);
		Character&	operator=(Character const &rhs);
		virtual std::string const&	getName(void) const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
};

#endif
