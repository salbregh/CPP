/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 16:56:38 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:49:33 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signgrade, int executegrade) :
_name(name), _signgrade(signgrade), _executegrade(executegrade)
{
	this->_signed = false;
	if (this->_signgrade > 150)
		throw GradeTooLowException();
	if (this->_executegrade > 150)
		throw GradeTooLowException();
	if (this->_signgrade < 1)
		throw GradeTooHighException();
	if (this->_executegrade < 1)
		throw GradeTooHighException();
}

Form::~Form(void)
{
	return ;
}

std::string		Form::getName(void) const
{
	return (this->_name);
}

int				Form::getSigngrade(void) const
{
	return (this->_signgrade);
}

int				Form::getExecutegrade(void) const
{
	return (this->_executegrade);
}

int				Form::getSigned(void) const
{
	return (this->_signgrade);
}

void			Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signgrade)
	{
		std::cout << bureaucrat.getName() << " cannot sign " << getName() << std::endl;
		throw GradeTooLowException();
	}
	this->_signed = true;
	std::cout << bureaucrat.getName() << " signs " << getName() << std::endl;
}

const char*		Form::GradeTooHighException::what() const throw()
{
	return "GRADE TOO HIGH";
}

const char*		Form::GradeTooLowException::what() const throw()
{
	return "GRADE TOO LOW";
}

std::ostream	&operator<<(std::ostream &out, const Form &rhs)
{
	out << "Form name: " << rhs.getName() << ", signgrade: " << rhs.getSigngrade() 
	<< ", executegrade" << rhs.getExecutegrade() <<  std::endl;
	return out;
}
