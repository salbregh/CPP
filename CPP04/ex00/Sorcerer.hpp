/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 09:06:55 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 22:09:09 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class	Sorcerer
{
	protected:
		std::string		_name;
		std::string		_title;

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(void);
		~Sorcerer(void);
		Sorcerer(Sorcerer const &src);
		Sorcerer&	operator=(Sorcerer const &rhs);
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void		polymorph(Victim const &obj) const;
		void		polymorph(Peon const &obj) const;
};

std::ostream& operator<<(std::ostream &out, const Sorcerer &rhs);

#endif
