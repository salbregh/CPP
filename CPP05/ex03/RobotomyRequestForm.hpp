/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 13:22:02 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:40:33 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM
# include "Form.hpp"

class	Robotomy : public Form
{
	private:
		std::string	_target;
		Robotomy(void);
		Robotomy&	operator=(const Robotomy &rhs);
		Robotomy(const Robotomy &src);
	public:
		Robotomy(std::string target);
		~Robotomy(void);
		void			action(void) const;
		virtual void	execute(Bureaucrat const &executor) const;
};

#endif
