# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: salbregh <salbregh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/10 17:58:26 by salbregh      #+#    #+#                  #
#    Updated: 2020/09/14 21:25:28 by salbregh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	bureaucrat

CXX			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

FILES		=	Bureaucrat.cpp Form.cpp main.cpp

all:		$(NAME)

$(NAME):
			$(CXX) $(FILES) $(FLAGS) -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all
