NAME = ScavTrap

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra -g
CC = c++
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp 

INC = ClapTrap.hpp ScavTrap.hpp

OBJS = $(SRCS:.cpp=.o)

.SILENT :

all: $(NAME)

$(NAME): $(INC) $(OBJS) 
		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean $(NAME)