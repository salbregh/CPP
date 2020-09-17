# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: salbregh <salbregh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/17 13:17:29 by salbregh      #+#    #+#                  #
#    Updated: 2020/09/17 13:26:09 by salbregh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	convert

CXX			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

FILES		=	main.cpp \
				ft_check_char.cpp \
				ft_check_int.cpp \
				ft_check_float.cpp \
				ft_check_double.cpp

all:		$(NAME)

$(NAME):
			$(CXX) $(FILES) $(FLAGS) -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all