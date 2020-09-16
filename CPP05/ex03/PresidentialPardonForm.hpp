/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 10:50:34 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:40:18 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDOMFORM_H
# define PRESIDENTIALPARDOMFORM_H
# include "Form.hpp"

class	Presidential : public Form
{
	private:
		std::string		_target;
		Presidential(void);
		Presidential&	operator=(const Presidential &rhs);
		Presidential(const Presidential &src);
	public:
		Presidential(const std::string &target);
		~Presidential(void);
		void			action(void) const;
		virtual void	execute(Bureaucrat const &executor) const;
};

#endif
