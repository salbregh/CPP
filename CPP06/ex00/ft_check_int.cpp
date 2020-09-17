/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_int.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:24:32 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/17 17:57:58 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		ft_check_int(std::string input)
{
	int		i = 0;
	while (input[i])
	{
		if (!(input[i] >= '0' && input[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	ft_convert_int(char* input)
{
	std::cout.precision(1); // set the precision of the output to 1
	int			integer = std::atoi(input);

	if ((integer < 32 || integer > 123) || (integer >= 0 && integer <= 9))
		std::cout << "char: non displayable" << std::endl;
	else
	{
		char	character = static_cast<char>(integer);
		std::cout << std::fixed << "char: '" << character << "'" << std::endl;
	}
	std::cout << std::fixed << "int: " << integer << std::endl;
	float	floatvar = static_cast<float>(integer);
	std::cout << std::fixed << "float: " << floatvar << 'f' << std::endl;
	double	doublevar = static_cast<double>(integer);
	std::cout << std::fixed << "double: " << doublevar << std::endl;
}