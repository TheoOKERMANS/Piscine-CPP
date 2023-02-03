SRC_FILE = main.cpp \
Bureaucrat.cpp \
Form.cpp \
ShrubberyCreationForm.cpp \
RobotomyRequestForm.cpp \
PresidentialPardonForm.cpp

SRC = $(addprefix src/, $(SRC_FILE))
OBJ= $(SRC_FILE:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Iincludes
NAME = ex02

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(FLAGS)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)
	mkdir obj
	mv $(OBJ) obj

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all