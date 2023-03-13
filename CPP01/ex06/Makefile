# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 23:33:59 by slavoie           #+#    #+#              #
#    Updated: 2023/03/12 19:58:59 by slavoie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harlfilter

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra
CC = c++
SRCS = main.cpp Harl.cpp

INC = Harl.hpp

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