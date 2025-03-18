NAME=mimi

CC=c++
FLAG=-Wall -Wextra -Werror -std=c++98

SRC=megaphone.cpp
OBJ=${SRC:.cpp=.o}
all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm $(OBJ)
fclean: clean
	rm $(NAME)
re:fclean all