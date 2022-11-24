SRC_FILE = main.cpp \
ClapTrap.cpp \
ScavTrap.cpp \
FragTrap.cpp\
DiamondTrap.cpp

SRC = $(addprefix src/, $(SRC_FILE))
OBJ= $(SRC_FILE:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wno-shadow -Wshadow -Iincludes
NAME = ex03

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(FLAGS) -g
	$(CC) -o $(NAME) $(OBJ) $(FLAGS) -g
	mkdir obj
	mv $(OBJ) obj

clean:
	rm -f $(OBJ)
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all