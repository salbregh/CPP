/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_int.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:24:32 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/21 17:55:45 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		ft_check_int(std::string input)
{
	int		i = 0;
	while (input[i])
	{
		if (!(input[i] >= '0' && input[i] <= '9') && input[i] != '-')
			return (0);
		if (input[i] == '-')
            if (i != 0)
                return (0);
		i++;
	}
	return (1);
}

void	ft_convert_int(char* input)
{
	std::cout.precision(1);
	int 		integer = std::atoi(input);
	long double		lng = std::atol(input);

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
		std::cout << std::fixed << "double: " << static_cast<double>(lng) << std::endl;
		return ;
	}
	else if (!(lng <= MAX_INT && lng >= MIN_INT))
	{
		std::cout << "goes in" << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << std::fixed << "float: " << static_cast<float>(lng) << 'f' << std::endl;
		std::cout << std::fixed << "double: " << static_cast<double>(lng) << std::endl;
		return ;
	}
	if ((integer < 32 || integer > 123) || (integer >= 0 && integer <= 9))
		std::cout << "char: non displayable" << std::endl;
	else if (integer > 255 || integer < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << std::fixed << "char: '" << static_cast<char>(integer) << "'" << std::endl;
	
	std::cout << std::fixed << "int: " << integer << std::endl;
	std::cout << std::fixed << "float: " << static_cast<float>(integer) << 'f' << std::endl;
	std::cout << std::fixed << "double: " << static_cast<double>(integer) << std::endl;
}
