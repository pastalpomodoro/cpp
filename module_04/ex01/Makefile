NAME=ex00

CC=c++
FLAG=-Wall -Werror -Wextra

SRC=main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJ=$(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re:fclean all