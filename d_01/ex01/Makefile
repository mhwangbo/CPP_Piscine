NAME = phone_book

SRC = phone_book.cpp \
	main.cpp

INC = -I .

OBJ = $(SRC:.cpp=.o)

CC = clang++

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ):
	$(CC) $(FLAGS) $(INC) -c $(SRC)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, re, clean, fclean
