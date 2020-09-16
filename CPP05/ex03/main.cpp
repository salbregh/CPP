/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 18:04:43 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:18:53 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int     main()
{    
	Intern	someRandomIntern;
	Form*	rrf;
	Form*	rrf2;
	Form*	rrf3;
	Form*	rrf4;
	try
	{
		rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
	}
	catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
	}
	try
	{
		rrf2 = someRandomIntern.makeForm("Shrubbery Creation", "something");
	}
	catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
	}
	try
	{
		rrf3 = someRandomIntern.makeForm("Robotomy Request", "something");
	}
	catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
	}
	try
	{
		rrf4 = someRandomIntern.makeForm("random", "no");
	}
	catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
	}

}