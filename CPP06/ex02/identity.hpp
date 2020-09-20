/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   identity.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 22:42:25 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/18 13:37:35 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTITY_H
# define IDENTITY_H
# include <iostream>

class	Base
{
	public:
		virtual ~Base(void);
};

/*
** virtual destructor is to destruct the subclasses
** in a proper order, when you delete a bass class
** pointing to a dirived class object
*/

// creating 3 empty classes that inherit from base
class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base*	generate(void);
void	identity_from_pointer(Base *p);
void	identity_from_reference(Base &p);

#endif
