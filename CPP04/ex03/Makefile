NAME = Materia

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra
CC = c++
SRCS =  main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

INC = AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp

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