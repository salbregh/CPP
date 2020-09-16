/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:43:51 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:53:19 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

Robotomy::Robotomy(std::string target) :
Form("Robotomy", 72, 45), _target(target)
{
	return ;
}

Robotomy::~Robotomy(void)
{
	return ;
}

void		Robotomy::action(void) const
{
	int		random = rand();
	int		nb = (random % 2);
	if (nb == 0)
		std::cout << "* drilling noise *  " << this->_target << " has been robotomized" << std::endl;
	if (nb == 1)
		std::cout << this->_target << " has not been robotomized" << std::endl;
}

void	    Robotomy::execute(Bureaucrat const &executor) const
{
    if (this->getSigned() != true)
        throw FormException();
    if (executor.getGrade() > getExecutegrade())
        throw GradeTooLowException();
   this->action();
}
