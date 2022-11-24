SRC = main.cpp

OBJ= $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex02

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(FLAGS)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)
	mkdir obj
	mv $(OBJ) obj

clean:
	rm -f $(OBJ)
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all