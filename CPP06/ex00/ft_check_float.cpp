/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_float.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:23:56 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/17 18:16:07 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		ft_check_float(std::string input)
{
	int		i = 0;
	int		checkdot = 0;
	int		checkf = 0;

	if (input == "-inff")
		return (1);
	if (input == "+inff")
		return (1);
	if (input == "nanf")
		return (1);
	while (input[i])
	{
		if (!(input[i] >= '0' && input[i] <= '9') && input[i] != '.' && input[i] != 'f')
			return (0);
		if (input[i] == '.')
		{
			if (checkdot != 0)
				return (0);
			checkdot = 1;
		}
		if (input[i] == 'f')
		{
			if ((unsigned)i == (input.length() - 1))
			{
				if (checkf != 0)
					return (0);
				checkf = 1;
			}
			else
				return (0);
		}
		i++;
	}
	if (checkdot != 1)
		return (0);
	if (checkf != 1)
		return (0);
	return (1);
}

void	ft_convert_float(char* input)
{
	std::cout.precision(1); // set the precision of the output to 1
	float		floatvar = std::atof(input);
	if (strcmp("nanf", input) == 0)
	{
		std::cout << "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: nanf" << std::endl
		<< "double: nan" << std::endl;
		return ;
	}
	if (strcmp("+inff", input) == 0)
	{
		std::cout << "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: +inff" << std::endl
		<< "double: +inf" << std::endl;
		return ;
	}
	if (strcmp("-inff", input) == 0)
	{
		std::cout << "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: -inff" << std::endl
		<< "double: -inf" << std::endl;
		return ;
	}
	if ((floatvar < 32 || floatvar > 123) || (floatvar >= 0 && floatvar <= 9))
		std::cout << "char: non displayable" << std::endl;
	else
	{
		char	character = static_cast<char>(floatvar);
		std::cout << std::fixed << "char: '" << character << "'" << std::endl;
	}
	int		integer = static_cast<int>(floatvar);
	std::cout << std::fixed << "int: " << integer << std::endl;
	std::cout << std::fixed << "float: " << floatvar << 'f' << std::endl;
	double	doublevar = static_cast<double>(floatvar);
	std::cout << std::fixed << "double: " << doublevar << std::endl;
}
