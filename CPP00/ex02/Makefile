SRC = Account.cpp \
tests.cpp

OBJ= $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex02

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(FLAGS)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all