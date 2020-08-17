# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: salbregh <salbregh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/17 17:37:07 by salbregh      #+#    #+#                  #
#    Updated: 2020/08/17 17:43:01 by salbregh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC		=	clang++

CFLAGS	=	-Wall -Werror -Wextra

NAME	=	megaphone

all:		$(NAME)

$(NAME):	$(NAME).cpp
			$(CC) $(FLAGS) -o $(NAME) $(NAME).cpp

clean:		rm -f $(NAME)

fclean:		clean

re:			fclean all