/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:14:48 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/21 16:13:25 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Give one parameter." << std::endl;
		return (0);
	}
	std::string		input = argv[1];
	if (ft_check_char(input) == 1)
	{
		ft_convert_char(argv[1]);
		return (0);
	}
	else if (ft_check_int(input) == 1)
	{
		ft_convert_int(argv[1]);
		return (0);
	}
	else if (ft_check_double(input) == 1)
	{
		ft_convert_double(argv[1]);
		return (0);
	}
	else if (ft_check_float(input) == 1)
	{
		ft_convert_float(argv[1]);
		return (0);
	}
	else
		std::cout << "No conversion found for the given input." << std::endl;
	return (0);
}
