/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   converter.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:16:03 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/21 15:40:52 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H
# include <iostream>
# include <string>

# define MAX_INT    std::numeric_limits<int>::max()
# define MIN_INT    std::numeric_limits<int>::min()
# define MAX_FLOAT  std::numeric_limits<float>::max()
# define MIN_FLOAT  std::numeric_limits<float>::min()
# define MAX_DOUBLE std::numeric_limits<double>::max()
# define MIN_DOUBLE std::numeric_limits<double>::min()

int		ft_check_char(std::string input);
void	ft_convert_char(char* input);
int		ft_check_double(std::string input);
void	ft_convert_double(char* input);
int		ft_check_float(std::string input);
void	ft_convert_float(char* input);
int		ft_check_int(std::string input);
void	ft_convert_int(char* input);

#endif
