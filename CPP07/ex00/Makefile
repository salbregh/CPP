# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: salbregh <salbregh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/22 18:03:39 by salbregh      #+#    #+#                  #
#    Updated: 2020/09/22 18:04:26 by salbregh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

CXX			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

FILES		=	main.cpp \
				test.cpp

all:		$(NAME)

$(NAME):
			$(CXX) $(FILES) $(FLAGS) -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all