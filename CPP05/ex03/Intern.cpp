/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 20:28:08 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:28:09 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::~Intern(void)
{
	return ;
}

const std::string	Intern::table[] = 
{"Presidential Pardon", "Shrubbery Creation", "Robotomy Request"};

typedef	Form*	(*createform) (std::string a); // will return a *form and take a parameter
Form*			functionPresidential(std::string a)
{
	Presidential *me = new Presidential(a);
	return me;
}
Form*			functionShrubbery(std::string a)
{
	Shrubbery *me = new Shrubbery(a);
	return me;
}
Form*			functionRobotomy(std::string a)
{
	Robotomy *me = new Robotomy(a);
	return me;
}

Form*			Intern::makeForm(std::string name, std::string target)
{
	createform functions[] = 
	{
		functionPresidential, functionShrubbery, functionShrubbery
	};
	for (int i = 0; i < 3; i++)
	{
		if (name == table[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (functions[i](target));
		}
	}
	throw noFormException();
	return (0);
}

const char*		Intern::noFormException::what() const throw()
{
	return "No form with the name requested";
}
