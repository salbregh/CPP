# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: salbregh <salbregh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 17:23:33 by salbregh      #+#    #+#                  #
#    Updated: 2020/08/31 17:24:34 by salbregh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

CXX			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

FILES		=	AWeapon.cpp \
				Character.cpp \
				Enemy.cpp \
				PlasmaRifle.cpp \
				PowerFist.cpp \
				RadScorpion.cpp \
				SuperMutant.cpp \
				main.cpp

all:		$(NAME)

$(NAME):
			$(CXX) $(FILES) $(FLAGS) -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all