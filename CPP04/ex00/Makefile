# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: salbregh <salbregh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 07:55:02 by salbregh      #+#    #+#                  #
#    Updated: 2020/08/31 07:55:35 by salbregh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

CXX			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

FILES		=	Sorcerer.cpp Victim.cpp Peon.cpp main.cpp

all:		$(NAME)

$(NAME):
			$(CXX) $(FILES) $(FLAGS) -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all
