/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 17:30:55 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 18:03:06 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat " << this->_name << " with grade " << this->_grade << " is made." << std::endl;
	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

int				Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void			Bureaucrat::incrementGrade(void)
{
	std::cout << "Try to increment " << this->_name << "'s grade which is now " << this->_grade << std::endl;
	if ((this->_grade - 1) < 1)
		throw GradeTooHighException();
	this->_grade -= 1;
	std::cout << "grade is now: " << this->_grade << std::endl;
}

void			Bureaucrat::decrementGrade(void)
{
	std::cout << "Try to decrement " << this->_name << "'s grade which is now " << this->_grade << std::endl;
	if ((this->_grade + 1) > 150)
		throw GradeTooLowException();
	this->_grade += 1;
	std::cout << "grade is now: " << this->_grade << std::endl;
}

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GRADE TOO HIGH";
} 

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GRADE TOO LOW";
}

const char*		Bureaucrat::FormException::what() const throw()
{
	return "FORM NOT SIGNED";
}

const char*		Bureaucrat::FormAlreadySigned::what() const throw()
{
	return "FORM ALREADY SIGNED";
}

void			Bureaucrat::signForm(Form &form)
{
	int i = form.getSigngrade();
	if (form.getSigned() == true)
	{
		throw FormAlreadySigned();
	}
	if (this->_grade > i)
	{
		throw GradeTooLowException();
	}
	form.beSigned(*this);
}

void			Bureaucrat::executeForm(Form const &form)
{
	if (form.getSigned() == false)	
		throw FormException();
	if (this->getGrade() > form.getExecutegrade())
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << this->_name << " executes " << form.getName() << std::endl;
	form.execute(*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureacrat grade " << rhs.getGrade() << std::endl;
	return out;
}
