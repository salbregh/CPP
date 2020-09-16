/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 18:04:43 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:25:20 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main()
{
    try
    {
        Bureaucrat test1("TEST1", 150);
        std::cout << test1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat test2("TEST2", 1);
    try
    {
        test2.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        test2.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        test2.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat	test1("test1", 100);
        Form		test2("testform1", 100, 50);
		test2.beSigned(test1);
    }
	catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	try
    {
        Bureaucrat	test1("test1", 100);
        Form		test2("testform1", 1, 50);
		test2.beSigned(test1);
    }
	catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
