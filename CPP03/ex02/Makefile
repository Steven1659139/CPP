NAME = FragTrap

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra -g
CC = c++
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

INC = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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