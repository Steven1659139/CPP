# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 23:32:15 by slavoie           #+#    #+#              #
#    Updated: 2023/03/12 20:00:05 by slavoie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra -g
CC = c++
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

INC = Weapon.hpp HumanA.hpp HumanB.hpp

OBJS = $(SRCS:.cpp=.o)

.SILENT :

all: $(NAME)

$(NAME): $(OBJS) $(INC)
		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean $(NAME)