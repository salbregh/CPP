/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 17:56:47 by salbregh      #+#    #+#                 */
/*   Updated: 2020/08/17 18:06:36 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <iostream>
# include <string>

class	Pony
{
	public:
		Pony(std::string name, std::string color, int age);
		~Pony(void);
		void 	PonyOnTheHeap();
		void	PonyOnTheStack();	

	private:
		std::string		_name;
		std::string		_color;
		int				_age;
};

#endif
