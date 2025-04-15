NAME=ex02

CC=c++
FLAG=-Wall -Werror -Wextra -std=c++98

SRC=main.cpp Fixed.cpp
OBJ=${SRC:.cpp=.o}

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re:fclean all