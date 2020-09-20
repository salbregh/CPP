# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: salbregh <salbregh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/17 22:47:10 by salbregh      #+#    #+#                  #
#    Updated: 2020/09/18 14:42:37 by salbregh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	identity

CXX			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

FILES		=	main.cpp \
				identity.cpp \
				generate.cpp \
				identity_from_pointer.cpp \
				identity_from_reference.cpp

all:		$(NAME)

$(NAME):
			$(CXX) $(FILES) $(FLAGS) -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all