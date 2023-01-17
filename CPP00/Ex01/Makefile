CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

NAME = PhoneBook
CC = c++
SRCS = main.cpp PhoneBook.cpp Contact.cpp

INC = Contact.hpp PhoneBook.hpp

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