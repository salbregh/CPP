/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_double.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:23:04 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/21 17:51:22 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		ft_check_double(std::string input)
{
	int		i = 0;
	int		checkdot = 0;
	if (input == "-inf" || input == "+inf" || input == "nan" || input == "inf")
		return (1);
	while (input[i])
	{
		if (!(input[i] >= '0' && input[i] <= '9') && input[i] != '-' && input[i] != '.')
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
		i++;
	}
	if (checkdot != 1)
		return (0);
	return (1);
}

void	ft_convert_double(char* input)
{
	std::cout.precision(1);
	double		doublevar = std::atof(input);
	long double	lng = std::atol(input);

	if (strcmp("nan", input) == 0 || strcmp("+inf", input) == 0
	|| strcmp("-inf", input) == 0 || strcmp("inf", input) == 0)
	{
		std::cout << "char: impossible" << std::endl
		<< "int: impossible" << std::endl;
		if (strcmp("nan", input) == 0)
			std::cout << "float: nanf" << std::endl << "double: nan" << std::endl;
		if (strcmp("+inf", input) == 0)
			std::cout << "float: +inff" << std::endl << "double: +inf" << std::endl;
		if (strcmp("-inf", input) == 0)
			std::cout << "float: -inff" << std::endl << "double: -inf" << std::endl;
		if (strcmp("inf", input) == 0)
			std::cout << "float: inff" << std::endl << "double: inf" << std::endl;
		return ;
	}
	if (!(lng <= MAX_DOUBLE && lng >= MIN_DOUBLE))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	else if (!(lng <= MAX_FLOAT && lng >= MIN_FLOAT))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << std::fixed << "double: " << doublevar << std::endl;
		return ;
	}
	else if (!(lng <= MAX_INT && lng >= MIN_INT))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << std::fixed << "float: " << static_cast<float>(doublevar) << 'f' << std::endl;
		std::cout << std::fixed << "double: " << doublevar << std::endl;
		return ;
	}
	if ((doublevar < 32 || doublevar > 123) || (doublevar >= 0 && doublevar <= 9))
		std::cout << "char: non displayable" << std::endl;
	else if (doublevar > 255 || doublevar < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << std::fixed << "char: '" << static_cast<char>(doublevar) << "'" << std::endl;
	std::cout << std::fixed << "int: " << static_cast<int>(doublevar) << std::endl;
	std::cout << std::fixed << "float: " << static_cast<float>(doublevar) << 'f' << std::endl;
	std::cout << std::fixed << "double: " << doublevar << std::endl;
}
