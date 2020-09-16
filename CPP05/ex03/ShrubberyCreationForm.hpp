/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 16:00:10 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:40:06 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM
# include "Form.hpp"
# include <fstream>

class	Shrubbery : public Form
{
	private:
		std::string		_target;
		Shrubbery(void);
		Shrubbery&	operator=(const Shrubbery &rhs);
		Shrubbery(const Shrubbery &src);
	public:
		Shrubbery(const std::string &target);
		~Shrubbery(void);
		void			action(void) const;
		virtual void	execute(Bureaucrat const &executor) const;
		
		class		fileError : public std::exception
		{
			public:
				virtual const char * what () const throw();
		};
};

#endif
