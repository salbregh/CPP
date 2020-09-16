/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 12:42:24 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/15 12:01:48 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const std::string	_name;
		bool				_signed;
		int					_signgrade;
		int					_executegrade;
		Form(const Form &src);
		Form&				operator=(const Form &rhs);

	public:
		Form(void);
		Form(const std::string name, int signgrade, int executegrade);
		~Form(void);
		std::string		getName(void) const;
		int				getSigngrade(void) const;
		int				getExecutegrade(void) const;
		bool			getSigned(void) const;
		void			beSigned(Bureaucrat &bureaucrat);
		virtual void	execute(Bureaucrat const &executor) const = 0;

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
};

#endif
