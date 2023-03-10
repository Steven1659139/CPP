NAME = Animal

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra -g
CC = c++
SRCS =  main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

INC = Animal.hpp Brain.hpp

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