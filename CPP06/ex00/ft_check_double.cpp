/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_double.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:23:04 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/17 18:14:35 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		ft_check_double(std::string input)
{
	int		i = 0;
	int		checkdot = 0;
	if (input == "-inf")
		return (1);
	if (input == "+inf")
		return (1);
	if (input == "nan")
		return (1);
	while (input[i])
	{
		if (!(input[i] >= '0' && input[i] <= '9') && input[i] != '.')
			return (0);
		if (input[i] == '.')
		{
			if (checkdot != 0)
				return (0);
			checkdot = 1;
		}
		i++;
	}
	if (checkdot != 1)
		return (0);
	return (1);
}

void	ft_convert_double(char* input)
{
	std::cout.precision(1); // set the precision of the output to 1
	double		doublevar = std::atof(input);

	if (strcmp("nan", input) == 0)
	{
		std::cout << "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: nanf" << std::endl
		<< "double: nan" << std::endl;
		return ;
	}
	if (strcmp("+inf", input) == 0)
	{
		std::cout << "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: +inff" << std::endl
		<< "double: +inf" << std::endl;
		return ;
	}
	if (strcmp("-inf", input) == 0)
	{
		std::cout << "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: -inff" << std::endl
		<< "double: -inf" << std::endl;
		return ;
	}
	if ((doublevar < 32 || doublevar > 123) || (doublevar >= 0 && doublevar <= 9))
		std::cout << "char: non displayable" << std::endl;
	else
	{
		char	character = static_cast<char>(doublevar);
		std::cout << std::fixed << "char: '" << character << "'" << std::endl;
	}
	int		integer = static_cast<int>(doublevar);
	std::cout << std::fixed << "int: " << integer << std::endl;
	float	floatvar = static_cast<float>(doublevar);
	std::cout << std::fixed << "float: " << floatvar << 'f' << std::endl;
	std::cout << std::fixed << "double: " << doublevar << std::endl;
}
