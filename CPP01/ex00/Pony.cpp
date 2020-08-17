/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 18:04:58 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/17 18:14:54 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age) : _name(name), _color(color), _age(age)
{
	std::cout << "Pony " << this->_name << " is born" <<  std::endl;
	std::cout << this->_name << "s color is " << _color << std::endl;
	std::cout << this->_name << " is " << this->_age << " years old" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Pony " << this->_name << " died" << std::endl;
    return ;
}
