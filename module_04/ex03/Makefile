NAME=ex03

CC=c++
FLAG=-Wall -Werror -Wextra

SRC=main.cpp AMateria.cpp
OBJ=$(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re:fclean all