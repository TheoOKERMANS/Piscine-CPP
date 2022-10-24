SRC = main.cpp \
Fixed.cpp

OBJ= $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex02

#-----------TXT-----------
TXT_BLACK=\033[0;30m
TXT_RED=\033[0;31m
TXT_GREEN=\033[0;32m
TXT_ORANGE=\033[0;33m
TXT_BLUE=\033[0;34m
TXT_PURPLE=\033[0;35m
TXT_CYAN=\033[0;36m
TXT_LIGHT_GRAY=\033[0;37m

TXT_NC=\033[0m
TXT_TITLE=\033[1;35m
TXT_COMPILING=\033[1;34m
TXT_DELETING=\033[1;31m
TXT_DONE=\033[0;32m
#-------------------------

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all