NAME = BSP

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra -g
CC = c++
SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp 

INC = Fixed.hpp Point.hpp

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