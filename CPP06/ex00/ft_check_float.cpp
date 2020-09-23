/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_float.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 14:04:12 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/23 14:04:14 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		ft_check_float(std::string input)
{
	int		i = 0;
	int		checkdot = 0;
	int		checkf = 0;

	if (input == "-inff" || input == "+inff"|| input == "inff" || input == "nanf")
		return (1);
	while (input[i])
	{
		if (!(input[i] >= '0' && input[i] <= '9') && input[i] != '-' && input[i] != '.' && input[i] != 'f')
			return (0);
		if (input[i] == '.')
		{
			if (checkdot != 0)
				return (0);
			checkdot = 1;
		}
		if (input[i] == '-')
            if (i != 0)
                return (0);
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
	if (checkf == 1 && checkdot == 1 && input.length() == 2)
		return (0);
	return (1);
}

void	ft_convert_float(char* input)
{
	std::cout.precision(1);
	float		floatvar = std::atof(input);
	long double	lng = std::atof(input);
	if (strcmp("nanf", input) == 0 || strcmp("+inff", input) == 0
	|| strcmp("-inff", input) == 0 || strcmp("inff", input) == 0)
	{
		std::cout << "char: impossible" << std::endl
		<< "int: impossible" << std::endl;
		if (strcmp("nanf", input) == 0)
			std::cout << "float: nanf" << std::endl << "double: nan" << std::endl;
		if (strcmp("+inff", input) == 0)
			std::cout << "float: +inff" << std::endl << "double: +inf" << std::endl;
		if (strcmp("-inff", input) == 0)
			std::cout << "float: -inff" << std::endl << "double: -inf" << std::endl;
		if (strcmp("inff", input) == 0)
			std::cout << "float: inff" << std::endl << "double: inf" << std::endl;
		return ;
	}
	if (!(lng <= DBL_MAX && lng >= -DBL_MAX))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	else if (!(lng <= FLT_MAX && lng >= -FLT_MAX))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << std::fixed << "double: " << static_cast<double>(lng) << std::endl;
		return ;
	}
	else if (!(lng <= INT_MAX && lng >= INT_MIN))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << std::fixed << "float: " << floatvar << 'f' << std::endl;
		std::cout << std::fixed << "double: " << static_cast<double>(floatvar) << std::endl;
		return ;
	}
	if ((floatvar < 32 || floatvar > 123) || (floatvar >= 0 && floatvar <= 9))
		std::cout << "char: non displayable" << std::endl;
	else if ((floatvar > 255 || floatvar < 0))
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << std::fixed << "char: '" << static_cast<char>(floatvar) << "'" << std::endl;
	std::cout << std::fixed << "int: " << static_cast<int>(floatvar) << std::endl;
	std::cout << std::fixed << "float: " << floatvar << 'f' << std::endl;
	std::cout << std::fixed << "double: " << static_cast<double>(floatvar) << std::endl;
}
