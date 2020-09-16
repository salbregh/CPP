/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 18:04:43 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 17:33:58 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int     main()
{
    srand((unsigned) time(0)); // for the random in robotomy
    Bureaucrat BUR("BUR", 1);
    Robotomy ROB("ROB");
    Shrubbery SHRUB("SHRUB");
    Presidential PRES("PRES");
    try
    {
        PRES.action(); // check the action of presidential
        SHRUB.action(); // check the action of shrubbery
        ROB.action(); // check the action of robotomy
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        BUR.signForm(ROB);
        BUR.signForm(SHRUB);
        BUR.signForm(PRES);
        BUR.signForm(PRES); // should give error because form already signed
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat BUR2("BUR2", 1);
    Robotomy ROB2("ROB2");
    Shrubbery SHRUB2("SHRUB2");
    Presidential PRES2("PRES2");
    try
    {
        ROB2.execute(BUR2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        BUR2.signForm(ROB2);
        BUR2.executeForm(ROB2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        BUR2.signForm(SHRUB2);
        BUR2.executeForm(SHRUB2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        BUR2.signForm(PRES2);
        BUR2.executeForm(PRES2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat BUR3("BUR3", 150);
    Robotomy ROB3("ROB3");
    try
    {
        BUR3.executeForm(ROB3); // check the action of robotomy
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}