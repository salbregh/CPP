/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 20:30:46 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:31:26 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	private:
		Intern(Intern const &src);
		Intern&		operator=(Intern const &rhs);
		// you dont dont want objects of the class to
		// be copies or assigned, now it cant be used in the main
	public:
		Intern(void);
		~Intern(void);
		Form*		makeForm(std::string name, std::string target);
		const static std::string	table[];
		class noFormException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
