/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 16:02:18 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/14 21:53:27 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
	
Shrubbery::Shrubbery(const std::string &target) :
Form("Shrubbery", 72, 45), _target(target)
{
    return ;
}

Shrubbery::~Shrubbery(void)
{
    return ;
}

void		Shrubbery::action(void) const
{
    std::string     target = this->_target;
    std::string     file = target.append("_shrubbery");
    std::ofstream   ofs(file.c_str());

	if (!ofs.is_open())
		throw fileError();

	ofs << "   __/ \\__ " << std::endl;
	ofs << "   \\     / " << std::endl;
	ofs << "   /.'o'.\\ " << std::endl;
	ofs << "    .o.'. " << std::endl;
	ofs << "    .'.'o'. " << std::endl;
	ofs << "   o'.o.'.o. " << std::endl;
	ofs << "  .'.o.'.'.o. " << std::endl;
	ofs << " .o.'.o.'.o.'. " << std::endl;
	ofs << "    [_____] " << std::endl;  
	ofs.close();
}

const char*	Shrubbery::fileError::what() const throw()
{
	return "FILE DOENST OPEN";
}

void	    Shrubbery::execute(Bureaucrat const &executor) const
{
    if (this->getSigned() != true)
        throw FormException();
    if (executor.getGrade() > getExecutegrade())
        throw GradeTooLowException();
    this->action();
}
