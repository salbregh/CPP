/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_int.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:24:32 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/22 17:02:46 by salbregh      ########   odam.nl         */
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
	long double lng = std::atof(input);
	
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
