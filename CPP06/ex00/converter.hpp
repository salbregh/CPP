/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   converter.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:16:03 by salbregh      #+#    #+#                 */
/*   Updated: 2020/09/17 17:18:24 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H
# include <iostream>
# include <string>

int		ft_check_char(std::string input);
void	ft_convert_char(char* input);
int		ft_check_double(std::string input);
void	ft_convert_double(char* input);
int		ft_check_float(std::string input);
void	ft_convert_float(char* input);
int		ft_check_int(std::string input);
void	ft_convert_int(char* input);

#endif
