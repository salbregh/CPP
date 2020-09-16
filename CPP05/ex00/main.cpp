/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 18:04:43 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/12 10:36:48 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main()
{
    try
    {
        Bureaucrat test1("TEST1", 151);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat test2("TEST2", 150);
        std::cout << test2;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat test3("TEST3", 1);
    try
    {
        test3.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        test3.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        test3.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

}