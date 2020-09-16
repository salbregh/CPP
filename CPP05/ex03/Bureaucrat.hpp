/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 17:26:34 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 15:29:08 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
		Bureaucrat(void);
	public:
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat&	operator=(const Bureaucrat &rhs);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form &form);
		void		executeForm(Form const &form);
		class		GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class		GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
		class		FormException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class		FormAlreadySigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif
