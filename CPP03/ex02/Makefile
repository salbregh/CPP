# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: salbregh <salbregh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/23 18:04:40 by salbregh      #+#    #+#                  #
#    Updated: 2020/08/27 16:55:46 by salbregh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	fragtrap

CXX			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

FILES		=	FragTrap.cpp ScavTrap.cpp ClapTrap.cpp main.cpp

all:		$(NAME)

$(NAME):
			$(CXX) $(FILES) $(FLAGS) -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all
