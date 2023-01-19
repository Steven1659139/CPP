NAME = Mégaphone

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra
CC = c++
SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

.SILENT :

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean $(NAME)