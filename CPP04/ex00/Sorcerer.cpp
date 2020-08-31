/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 09:21:00 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/31 14:00:09 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title
	<< " is dead. Consequences will never be the same!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}

Sorcerer&		Sorcerer::operator=(Sorcerer const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_title = rhs._title;
	}
	return (*this);
}

std::string	Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void		Sorcerer::polymorph(Victim const &obj) const
{
	std::cout << obj.getName() << " has been turned into a cute little sheep!" << std::endl;
}

void		Sorcerer::polymorph(Peon const &obj) const
{
	std::cout << obj.getName() << " has been turned into a pink pony!" << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Sorcerer &rhs)
{
	out << "I am " << rhs.getName() << ", " << rhs.getTitle()
	<< ", and I like ponies!" << std::endl;
	return (out);
}
