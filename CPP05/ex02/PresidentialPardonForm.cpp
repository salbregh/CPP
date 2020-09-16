/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 10:50:29 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:53:13 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
	
Presidential::Presidential(const std::string &target) :
Form("Presidential", 25, 5), _target(target)
{
    std::cout << "Presidential made with target: " << this->_target << std::endl;
    return ;
}

Presidential::~Presidential(void)
{
    return ;
}

void		Presidential::action(void) const
{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void		Presidential::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw FormException();
	if (executor.getGrade() > this->getExecutegrade())
		throw GradeTooLowException();
	this->action();
}
