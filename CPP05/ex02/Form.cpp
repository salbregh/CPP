/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 16:56:38 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:50:51 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int signgrade, int executegrade) :
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

bool			Form::getSigned(void) const
{
	return (this->_signed);
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

const char*		Form::FormException::what() const throw()
{
	return "FORM NOT SIGNED";
}

Form::Form(const Form &src) :
_name(src.getName()), _signgrade(src.getSigngrade()), _executegrade(src.getExecutegrade())
{
	if (src.getSigngrade() > 150 || src.getExecutegrade() > 150)
		throw GradeTooLowException();
	if (src.getSigngrade() < 1 || src.getExecutegrade() < 1)
		throw GradeTooHighException();
	this->_signed = false;
	*this = src;
}

Form&	Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs.getSigned();
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Form &rhs)
{
	out << "Form name: " << rhs.getName() << ", signgrade: " << rhs.getSigngrade() 
	<< ", executegrade" << rhs.getExecutegrade() <<  std::endl;
	if (rhs.getSigned() == true)
		out << "Form is signed" << std::endl;
	if (rhs.getSigned() == false)
		out << "Form is unsigned" << std::endl;
	return out;
}
