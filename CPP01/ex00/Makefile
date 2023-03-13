# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 23:30:06 by slavoie           #+#    #+#              #
#    Updated: 2023/03/12 20:00:24 by slavoie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra
CC = c++
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp 

INC = Zombie.hpp

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