NAME = Bureaucrat

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra
CC = c++
SRCS =  main.cpp Bureaucrat.cpp

INC = Bureaucrat.hpp

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