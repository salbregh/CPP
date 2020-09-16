/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 12:42:24 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:36:05 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signgrade;
		const int			_executegrade;
		Form(void);
		Form&	operator=(const Form &rhs);
		Form(const Form &src);

	public:
		Form(const std::string name, int signgrade, int executegrade);
		~Form(void);
		std::string	getName(void) const;
		int			getSigngrade(void) const;
		int			getExecutegrade(void) const;
		int			getSigned(void) const;
		void		beSigned(Bureaucrat &bureaucrat);

		class		GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class		GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
		
};

#endif
