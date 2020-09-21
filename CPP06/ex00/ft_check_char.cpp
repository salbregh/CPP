/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_char.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:22:11 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/21 16:26:26 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		ft_check_char(std::string input)
{
	int		i = 0;
	while(input[i])
	{
		if (((input[i] >= '!' && input[i] <= '/') ||
		(input[i] >= ';' && input[i] <= '~')) &&
		input.length() == 1)
			return (1);
		i++;
	}
	return (0);
}

void	ft_convert_char(char* input)
{
    std::cout.precision(1);
    char character = input[0];
	
    std::cout << "char: '" << std::fixed << character << "'"<< std::endl;
    std::cout << std::fixed << "int: " << static_cast<int>(character) << std::endl;
    std::cout << std::fixed << "float: " <<  static_cast<float>(character) << "f" << std::endl;
    std::cout << std::fixed << "double: " << static_cast<double>(character) << std::endl;
}