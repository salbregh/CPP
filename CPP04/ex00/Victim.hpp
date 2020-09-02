/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 09:47:32 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/02 22:08:48 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H
# include <iostream>

class	Victim
{
	protected:
		std::string		_name;
	public:
		Victim(std::string name);
		Victim(void);
		~Victim(void);
		Victim(Victim const &src);
		Victim&	operator=(Victim const &rhs);
		std::string	getName(void) const;
};

std::ostream& operator<<(std::ostream &out, const Victim &rhs);

#endif
	